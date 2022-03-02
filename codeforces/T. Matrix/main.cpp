#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,primary_d=0,secondary_d=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
              if(i==j)
                primary_d+=arr[i][j];
              if(i==n-j-1)
                secondary_d+=arr[i][j];
        }
    }
cout<<abs(primary_d-secondary_d);
    return 0;
}
