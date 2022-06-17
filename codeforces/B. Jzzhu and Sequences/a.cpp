#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loopi(si, n) for (int i = si; i < (n); i++)
#define loopj(sj, m) for (int j = sj; j < (m); j++)
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
ll negativeMod(ll n,ll mod){
    return (n%mod+mod)%mod;
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
    ll x, y, t;
    //let i  = t-1
    cin >> x >> y >> t;
    long long int s[] = {x, y, y - x, -x, -y, x - y};
    //it was a mathematical problem (hard one) :(
    cout<<negativeMod(s[(t-1)%6],(1e9)+7)<<line;
    return 0;
}


