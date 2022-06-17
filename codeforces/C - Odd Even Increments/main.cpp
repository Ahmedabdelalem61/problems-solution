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
        bool flag1 = true;
        bool flag2 = true;
        bool flag3 = true;
        bool flag4 = true;
        bool allisodd = true;
        bool alliseven = true;
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                alliseven = false;
            }else{
                allisodd = false;
            }
        }
        if(alliseven || allisodd){
            cout<<"YES\n";
            continue;
        }

        for(int i=0;i<n;i++){
            if(i%2==1 && a[i]%2==1){
                flag1 = false;
            }

            if(i%2==0 && a[i]%2==0){
                flag2 = false;
            }
        }
        if(flag1 && flag2){
            cout<<"YES\n";
            continue;
        }
        for(int i=0;i<n;i++){
            

            if(i%2==1 && a[i]%2!=1){
                flag3 = false;
            }

            if(i%2==0 && a[i]%2!=0){
                flag4 = false;
            }
        }
        if(flag3&&flag4){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}

