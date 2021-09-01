#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> negative;
    vector<int> postive;
    vector<int> zeroes;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<0)
            negative.push_back(x);
        else if(x>0)
            postive.push_back(x);
        else
            zeroes.push_back(x);
    }
    if(negative.size()%2==0)
    {
        vector<int>::iterator it = negative.begin();
        zeroes.push_back(*it);
        negative.erase(it);
    }
    if(!postive.size()){
        vector<int>::iterator it = negative.begin();
        postive.push_back(*it);
        negative.erase(it);
        it = negative.begin();
        postive.push_back(*it);
        negative.erase(it);
    }
    cout<<negative.size()<<" ";
    for(vector<int>::iterator it = negative.begin();it!=negative.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
    cout<<postive.size()<<" ";
    for(vector<int>::iterator it = postive.begin();it!=postive.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
    cout<<zeroes.size()<<" ";
    for(vector<int>::iterator it = zeroes.begin();it!=zeroes.end();it++)
        cout<<*it<<" ";
    return 0;
}
