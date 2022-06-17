#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define pb push_back
#define e end()
#define b begin()
#define ll long long
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        map<int,int> mp;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int flag = true;
        for(auto &m:mp){
            if(m.second >=3)
            {
                cout<<m.first<<endl;
                flag = false;
                break;

            }
        }
        if(flag == true){
            cout<<-1<<endl;
        }
    }

    return 0;
}

