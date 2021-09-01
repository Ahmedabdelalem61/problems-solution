#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        map<int,int>mp;
        map<int,int>Kmp;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(n==k)
            {
                for(int j=0;j<n;j++){
                cout<<1<<" ";
            }
            cout<<endl;
             break;
            }

            if(mp[arr[i]]>k)
                {
                cout<<0<<" ";
                mp[arr[i]]--;
                }
            else{
                cout<<mp[arr[i]]<<" ";
                Kmp[arr[i]]++;
                mp[arr[i]]--;
            }

        }
        cout<<endl;

    }
    return 0;
}
