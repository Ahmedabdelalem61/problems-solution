#include <bits/stdc++.h>

using namespace std;
#define MAX 1000000+9   //Maximum array size
long long a[MAX];
int main()
{
 int n,q;
 cin>>n>>q;
 vector<long long>v(n+9,0);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 while(q--){
    long long x,y,val;
    cin>>x>>y>>val;
    x--;
    y--;
    a[x]+=val;
    a[y+1]-=val;

 }
 for(int i=1;i<=n;i++)a[i]=a[i]+a[i-1];
 for(int i=0;i<n;i++)cout<<v[i]+a[i]<<" ";

}
