#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,maxx=0;
    cin>>n;

    string str,tGrams,currentTwoGrams;
    cin>>str;

    map<string,int>mp;

    for(int i=0;i<n-1;i++){
        currentTwoGrams = str.substr(i,2);
        mp[currentTwoGrams]++;
        if(mp[currentTwoGrams]>maxx){
            maxx = mp[currentTwoGrams];
            tGrams = currentTwoGrams;
        }
    }
        cout<<tGrams;

    return 0;
}
