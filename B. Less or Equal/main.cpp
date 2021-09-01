#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<int,int> mp;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    map<int,int>::iterator it = mp.begin();
    int c = 0;
    int i=0;
    int maxx = 0;
    for(it;it!=mp.end();it++)
    {


        if(c<k){
          c+=it->second;
          if(it->first>maxx)
            maxx = it->first;
        }
        i++;
    }
    if(n==1&&k==0&&arr[0]==1)
    {
        cout<<-1;
        return 0;
    }
    if(n==1&&k==0&&arr[0]==2)
    {
        cout<<1;
        return 0;
    }
    if(n==1&&k==1)
    {
        cout<<maxx;
        return 0;
    }

    if(c==k||k==0)
        cout<<maxx+1;
    else
        cout<<-1;


    return 0;
}
