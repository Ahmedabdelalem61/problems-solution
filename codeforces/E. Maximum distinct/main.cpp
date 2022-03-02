#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n,k;
    cin>>n>>k;

    string s ;
    cin>>s;

    unsigned int ans = 0,l=0,r=0;
    map<char , int> cnt;
    set<char> st;

    while(l<n){
        int temp = 0;
        while(r<n){
            temp++;
            st.insert(s[r]);
            cnt[s[r]]++;
            r++;
            if(r-l==k){
                break;
            }

        }
        if(st.size()<=k){
            ans = max(ans,st.size());
        }
        if(cnt[s[l]]==1)
            st.erase(s[l]);
        cnt[s[l]]--;
        l++;
    }
    cout<<ans;

    return 0;
}
