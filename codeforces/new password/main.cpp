#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string alphabit="abcdefghijklmnopqrstuvwxyz";
    string pass="";
    int n,k;
    cin>>n>>k;
    int temp = k;
    for(int i=0;i<k;i++){
    pass+=alphabit[i];
    }
    int c = 0;
    for(int i=0;i<n-k;i++){
    if(c==k)
    c=0;
    pass+=pass[c];
    c++;
    }
    bool flag = true;
     for(int i=0;i<n-1;i++){
        if(pass[i]==pass[i+1])
         flag = false;
     }
     if(flag){
        cout<<pass<<endl;
        return 0;
     }
    //cout<<"pass: "<<pass<<endl;
    sort(pass.begin(),pass.end());
    do
    {
     bool flag = true;
     for(int i=0;i<n-1;i++){
        if(pass[i]==pass[i+1])
         flag = false;
     }
     if(flag){
        cout<<pass<<endl;
        return 0;
     }
    //cout<<"Dsnt match: "<<pass<<endl;
    }
    while(next_permutation(pass.begin(),pass.end()));

    return 0;
}
