#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loopi(s, n) for (int i = s; i < (n); i++)
#define loopj(s, m) for (int j = s; j < (m); j++)
#define vi vector<int>
#define FASTINOUT            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define pb push_back
#define line "\n"
#define ll long long
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
bool sortDecreasing(int i1, int i2)
{
    return i1 > i2;
}
int findFact(int n)
{
    return n == 1 ? 1 : n * findFact(n - 1);
}
unsigned ll factorial(unsigned ll n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
ll findNpR(ll n, ll r)
{
    return factorial(n) / factorial(n - r);
}
int findNcR(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}
void solveByT()
{
    // x<n && x>=0 && y>=0 && y<m
    int dx[] = {1, -1, 1, -1};
    int dy[] = {1, -1, -1, 1};
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        loopi(0, n)
        {
            loopj(0, m)
            {
                cin >> arr[i][j];
            }
        }
        int mx = INT_MIN;
        int counter;
        loopi(0, n)
        {
            loopj(0, m)
            {
                counter = arr[i][j];
                for (int k = 0; k < 4; k++)
                {
                    for (int step = 1;; step++)
                    {
                        int x = i + step * dx[k];
                        int y = j + step * dy[k];
                        if (!(x < n && x >= 0 && y >= 0 && y < m))
                        {
                            break;;
                        }
                        counter += arr[x][y];
                    }
                }
                mx = max(mx, counter);
            }
        }
        cout << mx << line;
    }
}
int main()
{

    FASTINOUT
    solveByT();
    return 0;
}
