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
   int n,m;
        cin>>n>>m;
        int arr[n+1];
        int answer[n+1] = {0};
        map<int,bool> mp;
        loopi(1,n+1){
            cin>>arr[i];    
            mp[arr[i]] = false;
        }

        for(int i = n ; i >0 ; i--){
            if(i==n){
                answer[i] = 1;
            }else{
                if(mp[arr[i]] == true)
                answer[i] = answer[i+1];
                else
                answer[i]+= answer[i+1]+1; 
            }
            mp[arr[i]] = true;          
        }

        int x;
        while (m--)
        {
            cin>>x;
            cout<<answer[x]<<line;
        }

    return 0;
}



