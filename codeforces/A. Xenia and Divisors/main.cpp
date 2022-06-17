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
    int n;
    cin >> n ;
    int arr[n];
    map<int,int> mp;
    map<int,int> printing;
    loopi(0, n)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            printing[arr[i]]++;
        }
        if(mp[1]!=mp[2]+mp[3]||mp[1]!=mp[4]+mp[6]||mp[5]||mp[7]){
            cout<<-1<<line;
            return 0;
        }
        
        if(mp[3]>mp[6]){
            cout<<-1<<line;
            return 0;
        }else{
            int remain6 = mp[6]-mp[3];
            mp[6]-=mp[3];
            mp[3]=0;
            if(mp[6] < 0)
                cout<<-1;
            mp[2]-= mp[6];
            mp[2]-=mp[4];
            if(mp[2]!=0){
                cout<<-1<<line;
                return 0;
            }
        }
        while (printing[6]-- && printing[3]--)
        {
            cout<<"1 3 6\n";
        }
        printing[6]++;
        while (printing[6]-- && printing[2]--)
        {
            cout<<"1 2 6\n";
        }
        printing[2]++;
        while (printing[4]-- && printing[2]--)
        {
            cout<<"1 2 4\n";
        }
        
    return 0;
}

