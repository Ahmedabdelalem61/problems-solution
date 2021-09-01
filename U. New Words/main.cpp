#include <iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    map<char,int> mp;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        s[i] = tolower(s[i]);
        if(s[i]=='e')
            mp['e']++;
        else if(s[i]=='g')
            mp['g']++;
        else if(s[i]=='y')
            mp['y']++;
        else if(s[i]=='p')
            mp['p']++;
        else if(s[i]=='t')
            mp['t']++;
    }

    vector<int>v;
    int small = 0;
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++)
    {
        v.push_back(it->second);
    }
    sort(v.begin(),v.end());
    cout<<v[0];

    return 0;
}
