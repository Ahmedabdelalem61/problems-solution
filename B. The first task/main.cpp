#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void fast()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    int n;
    cin>>n;
    int x;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x);
    }
    cout<<(n-s.size())*2<<endl;
}
int main()
{
    //freopen("task.in","r",stdin);
    // freopen("output.txt","w",stdout);
    fast();
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
