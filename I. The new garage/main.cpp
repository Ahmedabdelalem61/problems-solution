#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    stack<int>stc;
    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
    int flag = 0,t=1;
    vector<int>::iterator it= v.begin();
    int i=1,c=0;
    while(true){
        c++;
        if(i>n){
            flag = 1;
        }
        if(flag==0){
          stc.push(i);
        //cout<<endl<<"this is the enter "<<stc.top()<<endl;
        }
        if(v[0]==stc.top()){
          //  cout<<endl<<"this is the exit "<<stc.top()<<endl;
            v.erase(v.begin());
            stc.pop();
            if(v.empty()){
                cout<<"YES";
                return 0;
            }
        }
        if(flag == 0){
            i++;
        }
        if(c>=n*2)
        {
            cout<<"NO";
            return 0;
        }

    }
    cout<<"NO";
    return 0;
}
