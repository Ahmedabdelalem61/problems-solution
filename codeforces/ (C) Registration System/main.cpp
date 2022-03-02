#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<string,int> check;
    string  name;
    while(t--){
     cin>>name;
     check[name]++;
     if(check[name]-1==0)
            cout<<"OK\n";
     else
        cout<<name<<check[name]-1<<"\n";
    }
    return 0;
}
