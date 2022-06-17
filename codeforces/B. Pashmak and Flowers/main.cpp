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
        /* code */
    }
}
int main()
{
    FASTINOUT
    ll n,x,mx = INT_MIN;
    cin>>n;
    ll f[n];
    map<ll,ll> mp;
    loopi(n){
        cin>>f[i];
        mp[f[i]]++;
    }
    sort(f,f+n);
    if(mp[f[0]]== n){
        cout<<f[n-1]-f[0]<<' '<<(mp[f[0]]*(mp[f[0]]-1))/2<<line;
        return 0;
    }
    mx = f[n-1]-f[0];
    cout<<mx<<' '<<mp[f[n-1]]*mp[f[0]];
    return 0;
}