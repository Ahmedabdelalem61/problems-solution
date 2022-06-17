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
#define fff flush
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
    }
}
int main()
{

    FASTINOUT
    // solveByT();
    int n, x, counter = 0;
    cin >> n;
    map<int, vi> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x].push_back(i);
    }
    vector<pair<int, int>> answers;
    for (auto &m : mp)
    {
        vi v = m.second;
        if (v.size() == 1)
        {
            counter++;
            answers.push_back({m.first, 0});
            continue;
        }
        int difCommon = abs(v[1] - v[0]);
        for (int i = 0; i < v.size(); i++)
        {
            if (abs(v[i] - v[i + 1]) != difCommon)
                break;
            if (i + 1 == v.size() - 1)
            {
                counter++;
                answers.push_back({m.first, difCommon});
                break;
            }
        }
    }
    cout << counter << line;
    for (auto &ans : answers)
    {
        cout << ans.first << ' ' << ans.second << line;
    }
    return 0;
}
