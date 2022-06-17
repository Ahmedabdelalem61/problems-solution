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
#define vi         vector<int>
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
    int n, m;
    cin >> n ;
    int a[n];
    loopi(n){
        cin>>a[i];
    }
    cin>> m;
    int bb[m];
    loopj(m){
        cin>>bb[j];
    }
    map<int,int> freq;
    int maxx = INT_MIN;
    for(int i= 0 ; i<n ; i++)
       for(int j = 0 ; j< m ; j++){
            if(bb[j]%a[i] == 0){
                freq[bb[j]/a[i]]++;
            }
        }
    for(auto &m:freq)
        maxx = max(m.first,maxx);
    cout<<freq[maxx]<<line;
    
    return 0;
}