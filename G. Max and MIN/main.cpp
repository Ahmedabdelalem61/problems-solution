#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        a.push_back(x);
    }
    cout<<*min_element(a.begin(), a.end())<<" "<<*max_element(a.begin(), a.end());
    return 0;
}
