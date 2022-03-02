#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A;
    int n,k;
    cin>>n>>k;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        A.push_back(x);
    }
    int v_size = A.size();
    int v[v_size];
    for(int i = 0;i<v_size;i++){
        int After = i+k;
        if(After>=v_size)
            After = abs(After-v_size);
            After = After%v_size;
           // cout<<"after :"<<After<<endl;
        v[After] = A[i];
    }
    for(int i=0;i<v_size;i++)
        cout<<v[i]<<" ";
    return 0;
}
