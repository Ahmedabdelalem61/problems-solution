#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    int arr[3];
    for(int i=0;i<3;i++)
        cin>>arr[i];
    sort(arr,arr+3);
    cout<<abs(arr[0]-arr[1])+abs(arr[1]-arr[2]);

    return 0;
}
