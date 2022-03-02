#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,t,x;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        vector<int> v (n);
        int l = 0,r = m-1;
        for(int i=0;i<n;i++)
            {
                cin>>x;
                v[i]=x;
                if(i>=m-1){
                   sort(v.begin()+l, v.begin()+r+1);
                   l++;
                   r++;
                }
            }
        cout<<v[k-1]<<endl;
    }

    return 0;
}
