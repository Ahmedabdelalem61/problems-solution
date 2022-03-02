#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,m,x;
    cin>>n>>m;
    map<int , int>mp;
    while(n--)
    {
        cin>>x;
        mp[x]++;
    }
    for(int i = -m ;i<=m;i++){
        if(mp[i]==0){
            cout<<i;
            return 0;        }

    }

    return 0;
}
