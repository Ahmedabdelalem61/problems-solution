#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>mp;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
        mp[s[i]]++;
    for (std::map<char,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
    std::cout << it->first << " : " << it->second << '\n';

    return 0;
}
