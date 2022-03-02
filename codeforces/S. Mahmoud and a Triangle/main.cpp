#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkTriange(int arr[],int n){
for(int i=0;i<n-2;i++)
    if(arr[i]+arr[i+1]>arr[i+2])
    return true;
return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    sort(arr,arr+n);
    if(n<3)
    {
        cout<<"NO";
        return 0;
    }
    if(checkTriange(arr,n))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
