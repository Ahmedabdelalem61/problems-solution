#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int  A[5]={3,8,9,7,6};

    int k;
    cin>>k;

   int v_size =5;
    int v[5];
    for(int i = 0;i<v_size;i++){
    int After = i+k;
    if(After>=v_size)
        After = abs(After-v_size);
    v[After]=A[i];
    }
    for(int i = 0;i<v_size;i++)
       cout<<v[i]<<" ";
    return 0;
}
