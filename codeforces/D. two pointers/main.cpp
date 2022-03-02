#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(0);


     int l=0,r=0,n;
     long long int sum=0,m;
     cin>>n>>m;
     int A[n];
     int ans =n+1;
     for(int i=0;i<n;i++)
        cin>>A[i];
     while(l<n){
        while(r<n && sum<m){
            sum+=A[r];
            r++;
        }
        if(sum>=m)
        ans = min (ans,r-l);
        sum-=A[l];
        l++;
     }
    if(ans==n+1)
    {
        cout<<-1;
        return 0;
    }
    cout<<ans;

    return 0;
}
