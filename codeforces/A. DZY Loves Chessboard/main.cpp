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
    char arr[100][100];

    loopi(n)
        loopj(m)
    {
        if (i % 2 == 0)
        {
            if (j % 2 == 0)
                arr[i][j] = 'B';
            else
                arr[i][j] = 'W';
        }
        else
        {
            if (j % 2 == 0)
                arr[i][j] = 'W';

            else
                arr[i][j] = 'B';
        }
    }
    string str;
    loopi(n)
    {
        cin >> str;
        loopj(m)
        {
            if (str[j] == '-')
                cout << '-';
            else
                cout << arr[i][j];
        }
        cout << line;
    }

    return 0;
}