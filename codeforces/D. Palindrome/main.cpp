#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{   int n;
    string s;
    cin>>n>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int c = 0;
    for(map<char,int>::iterator it = mp.begin();it!=mp.end();it++){
       c+=it->second%2;
    }

    if(n%2==1)
        c-=1;
    cout<<c/2;

    return 0;
}
