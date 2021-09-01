#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string sortString(string &str)
{
   sort(str.begin(), str.end());
   return str;
}
int main()
{
    map<char,int>mp;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    string newStr  = sortString(str);
    for(int i=0;i<str.length();i++){
        if(i>=1)
        {
            if(newStr[i]==newStr[i-1])
                continue;
        }
        cout<<newStr[i]<<" "<<mp[newStr[i]]<<endl;
    }


    return 0;
}
