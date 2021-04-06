#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
   int n,m;
   cin>>n>>m;
   int A[n],B[m];
    for(int i=0;i<n;i++)
    cin>>A[i];
    for(int i=0;i<m;i++)
    cin>>B[i];
    for(int i=0;i<m;i++){
       if(){
         cout<<"NO";
         return 0;
        }
    }
      cout<<"YES";
    return 0;
}
