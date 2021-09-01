#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,x;
    vector<int>v;
    for(int i=1;i<10000;i++)
    {
        if(i%10==3||i%3==0)
            continue;
        v.push_back(i);
    }
    cin>>x;
    cout<<v[x-1]<<endl;
    }


    return 0;
}
