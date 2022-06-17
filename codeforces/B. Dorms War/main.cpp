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
        int n, k;
        string str;
        cin >> n >> str;
        cin>> k;
        vector<int> v;
        char ch;
        vector<char> ks;
        while (k--)
        {
            cin >> ch;
            ks.push_back(ch);
        }
        loopj(0, ks.size())
        {
            for (int i = 0; i< n; i++)
            {
                if (str[i] == ks[j])
                {
                    v.push_back(i + 1);
                }
            }
        }
        sort(v.begin(), v.end());
        int mx = v.size() == 0?0 : v[0] - 1;
        for (int i = 1; i < v.size(); i++)
        {
            mx = max(v[i] - v[i - 1], mx);
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
