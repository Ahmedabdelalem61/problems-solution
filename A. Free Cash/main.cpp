#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<int,int>,int> mp;
    int n,h,m;
    cin>>n;

    while(n--){
        cin>>h>>m;
        mp[{h,m}]++;
    }

    int need = 0,have = 0;
    for(map<pair<int,int>,int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        if(it->second==1){
            if(have){
               have-=1;
            }else{
               need+=1;
            }

        }else{
            if(have>=it->second){
                have-= it->second;
            }else{
                need += it->second-have;
                have = 0;
            }

        }
        have+=it->second;
        //cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<"need: "<<need<<endl;
    }

    cout<<need;

    return 0;
}
