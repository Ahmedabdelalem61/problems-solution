#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;

    map<int ,int> mp;
    bool isValid = true;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }

    for(auto & c : mp){
        if(n<(c.second*2)-1){
            isValid = false;
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
