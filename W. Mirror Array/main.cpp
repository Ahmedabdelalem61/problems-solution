#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> b;
  vector<vector<int> > a;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    reverse(b.begin(),b.end());
    a.push_back(b);
    b.clear();
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
    return 0;
}
