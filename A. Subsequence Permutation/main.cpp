#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        string str;
        cin>>n>>str;
        string sorted = str;
        sort(sorted.begin(),sorted.end());
        int ans = 0;
        for(int i=0;i<n;i++)
            if(str[i]==sorted[i])
            ans  += 1;
        cout<<n-ans<<endl;
    }
    return 0;
}
