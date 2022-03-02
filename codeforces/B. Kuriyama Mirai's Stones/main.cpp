#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    long long v[n+1];
    long long u[n+1];
    long long prefixV[n+1];
    long long prefixU[n+1];
    prefixV[0] = 0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        u[i] = v[i];
        prefixV[i] = prefixV[i-1] + v[i];
    }
    sort(u+1,u+n+1);
    for(int i=1;i<=n;i++){
        prefixU[i] = prefixU[i-1] + u[i];
    }
    int l,r,type;
    cin>>q;
    while(q--){
        cin>>type>>l>>r;
        if(type==1)
        cout<<prefixV[r]-prefixV[l-1]<<endl;
        else
        cout<<prefixU[r]-prefixU[l-1]<<endl;
    }


    return 0;
}
