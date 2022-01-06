#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    int len = n*m;
    int arr[len];
    bool compatible = true;

    for(int i=0;i<len;i++){
        cin>>arr[i];
        if(arr[0]%d!=arr[i]%d)
            compatible=false;
    }

    if(!compatible){
        cout<<-1;
        return 0;
    }

    sort(arr,arr+len);
    int num_op = 0;
    for(int i=0;i<len;i++)
        num_op+=abs(arr[i]-arr[len/2])/d;

    cout<<num_op;
    return 0;
}
