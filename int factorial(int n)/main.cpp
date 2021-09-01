#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n)
{
    if( n > 1)
        return n*factorial(n - 1);
    return 1;
}
long long Fibonacci(int n){
    long long n1=0, n2=1, n3;

    if(n==1)
        return 0;
    if(n==2)
        return 1;
    for(int i=0;i<n-2;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}
long long sum (long long n){
long long total  = 0,x;
for(int i=0;i<n;i++){
    cin>>x;
    total+=x;
}

return total;

}
int largest(int arr[], int n)
{
    return *max_element(arr, arr+n);
}
int main()
{
    int n,maxx = -100000000000;
    cin>>n;
    int arr[n],arr2[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        if(maxx<=arr[i])
        {
            maxx = arr[i];
        }
        arr2[i] = maxx;
    }
    for(int i = 0;i<n;i++ ){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
