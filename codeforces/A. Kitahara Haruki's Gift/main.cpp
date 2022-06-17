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
    }
}
int main()
{

    FASTINOUT
    // solveByT();
    double n, x;
    map<double, double> f;
    cin >> n;
    while (n--)
    {
        cin >> x;
        f[x]++;
    }
    double all = f[200]+(f[100]/2.0);
    if(all<2.0 && f[100] == 2 && f[200] == 0.0){
        cout << "YES" << line;
        return 0;
    }
    remainder(all,2.0) == 0.0  || (remainder(f[100],2.0) == 0.0 && remainder(f[200],2.0) == 0.0) ? cout << "YES" << line:cout << "NO" << line; 
    return 0;
}
