#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    vector< vector<int> > V;
    V.push_back(b);
    V.push_back(a);
    for (int i = 0; i < V.size(); i++) {
        for (int j = 0; j < V[i].size(); j++)
            cout << V[i][j] << " ";
    }
    return 0;
}
