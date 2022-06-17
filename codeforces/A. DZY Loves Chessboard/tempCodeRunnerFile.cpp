#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loopi(n) for (int i = 0; i < (n); i++)
#define loopj(m) for (int j = 0; j < (m); j++)
#define vi vector<int>
#define FASTINOUT            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define pb push_back
#define e end()
#define line "\n"
#define b begin()
#define ll long long
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
void solveByT()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
    }
}
int main()
{
    FASTINOUT
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    bool A = true;
    loopi(n)
            loopj(m)
                cin >>
        arr[i][j];
    loopi(n)
    {
        loopj(m)
        {
            if (arr[i][j] != '-')
            {
                if (i == 0)
                {
                    if (arr[i] == "-")
                    {
                        arr[i][j] = '-';
                    }
                    else if (A)
                    {
                        arr[i][j] = 'W';
                        A = !A;
                    }
                    else
                    {
                        arr[i][j] = 'B';
                        A = !A;
                    }
                }
                else if (j == 0 && i > 0)
                {
                    if (arr[i - 1][0] == 'W')
                    {
                        arr[i][j] = 'B';
                        A = true;
                    }
                    else if (arr[i - 1][0] == '-')
                    {
                        arr[i][j] = '-';
                    }
                    else
                    {
                        arr[i][j] = 'W';
                        A = false;
                    }
                }
                else
                {
                    if (
                        arr[i][j - 1] == 'W' && arr[i - 1][j] == '-' ||
                        arr[i][j - 1] == 'W' && arr[i - 1][j] == 'W' ||
                        arr[i][j - 1] == '-' && arr[i - 1][j] == 'W')
                        arr[i][j] = 'B';
                    else if (
                        arr[i][j - 1] == 'B' && arr[i - 1][j] == '-' ||
                        arr[i][j - 1] == 'B' && arr[i - 1][j] == 'B' ||
                        arr[i][j - 1] == '-' && arr[i - 1][j] == 'B')
                        arr[i][j] = 'W';
                    else if (arr[i][j - 1] == '-' && arr[i - 1][j] == '-')
                        arr[i][j] = 'B';
                    else
                        arr[i][j] = 'R'; // error
                }
            }
            else
            {
                arr[i][j] = '-';
            }
        }
    }
    loopi(n)
    {
        loopj(m)
                cout
            << arr[i][j];
        cout << line;
    }

    return 0;
}