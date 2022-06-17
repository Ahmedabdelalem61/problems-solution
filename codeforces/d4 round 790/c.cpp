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
      int n,m;
      cin>>n>>m;
      string strs[n];
      loopi(0,n)
       cin>>strs[i];
      int mn = INT_MAX;
      loopi(0,n){
          loopj(0,n){
              int diff = 0;
              if(i!=j){
                  for(int a = 0;a<m;a++){
                      diff+=abs((strs[i][a]-'a')-(strs[j][a]-'a'));
                  }
                  mn = min(mn,diff);
              }
              
          }
      }
      cout<<mn<<line;
    }
}
int main()
{

    FASTINOUT
    solveByT();

    return 0;
}
