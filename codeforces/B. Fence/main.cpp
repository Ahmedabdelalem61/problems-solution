#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, k,c = 0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k--;
    vector<int> allKSums(n);
    map<long long ,int>mp;
    long long prefix_sum[n];
    prefix_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    long long min = 10e10 ,index;
    for(int i=0;i<n;i++){
        if(i>=k+1){
            long long ks = prefix_sum[i]-prefix_sum[i-k-1];
            if(ks<min){
                min = ks;
                index = i-k+1;
            }
        }else if(i==k){
            long long ks = prefix_sum[i];
            if(ks<min){
                min = ks;
                index = i-k+1;
            }
        }
    }
    cout<<index<<endl;

    return 0;
}
