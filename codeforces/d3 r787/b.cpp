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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        loopi(0, n)
                cin >>
            arr[i];
        bool zeroEquality = false;
        int ops = 0;
        for (int i = n - 1; i >= 1; i--)
        {

            while (arr[i] <= arr[i - 1])
            {
                arr[i - 1] = arr[i - 1] / 2;
                if (arr[i] - arr[i - 1] == 0 && arr[i] == 0)
                {
                    zeroEquality = true;
                    break;
                }
                ops++;
            }
        }
        if (zeroEquality)
        {
            cout << -1 << line;
            continue;
        }
        else if (is_sorted(arr, arr + n))
        {
            cout << ops;
        }
        else
        {
            cout << -1;
        }
        cout << line;
    }
}
int main()
{

    FASTINOUT
    solveByT();
    return 0;
}
