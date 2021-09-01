#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,x;
    map<int,int>mark;
    int ans;
    int maxn=0;
    cin>>n;
        ans=0;
        for(int i=1; i<=2*n; i++)
        {
            cin>>x;
            mark[x]++;
            if(mark[x]==1)
            {
                ans++;
            }
            else if(mark[x]==2)
            {
                ans--;
            }
            if(maxn<ans)
                maxn=ans;
        }
        cout<<maxn<<endl;
    return 0;
}
