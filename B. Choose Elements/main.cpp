#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    long long maxx = 0;
    for(int i=0;i<k;i++){
        if(arr[i]>0)
        maxx+=arr[i];
    }

    cout<<maxx;
    return 0;
}
