#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    sort(arr+1,arr+n+1);
    long long operations = 0;
    for(int i=1;i<=n;i++){
        operations+= abs(i-arr[i]);
    }


    cout<<operations;
    return 0;
}
