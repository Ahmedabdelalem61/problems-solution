#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int l,r;
    bool f1 = false,f2 = false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            {
                l=i;
                f1=true;
            }
        if(s[s.length()-i-1]=='1')
            {
                r=s.length()-i-1;
                f2 = true;
            }
        if(f1&&f2)
            break;
    }
    int cnt = 0;
    if(l<r&&f1&&f2){
        for(int i = l;i<r;i++){
            if(s[i]=='0')
                cnt++;
        }
        cout<<cnt<<endl;
    }else{
     cout<<0<<endl;
    }

    }


    return 0;
}
