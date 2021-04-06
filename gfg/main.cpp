#include <iostream>
#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
/*
map<pair<ll  ,ll   >,ll > my_map;
 ll  n,s1=0,s2=0;
cin>>n;
ll c=0,i=1.0;
while(s1<=n){

    s1=(i*(1+i))/2;
    s2=((i+1)*(1+(i+1)))/2;
    my_map[{s1,s2}]=i;
    i++;
}
 for(map<pair<ll ,ll >,ll >::iterator it = my_map.begin(); it != my_map.end(); ++it) {
   if(n>=it->first.first&&n<it->first.second)
    cout<<it->second;
  }
map<char,int>my_map;
string str,all = "abcdefghijklmnopqrstvuwxyz";
cin>>str;
for(int i=0;i<str.length();i++){
    my_map[str[i]]++;
}
str="";
for(map <char,int >::iterator it = my_map.begin();it!= my_map.end();it++){
    str+=it->first;
}
for(int i=0;i<str.length();i++){
    if(str[i]=='h'&&str[i+1]=='e'&&str[i+2]=='l'&&str[i+3]=='o')
    {
        cout<<"YES";
        return 0;
    }
}
cout<<"NO";*/

int l,r,m;
cin>>l>>r>>m;
while(m){
    if(r>l)
    {
        l++;
        m--;
    }else
    {
        r++;
        m--;
    }
}
if(l>r)
    cout<<r*2;
else
    cout<<l*2;
    return 0;
}
