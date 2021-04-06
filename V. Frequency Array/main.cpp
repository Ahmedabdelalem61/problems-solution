#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],frequency[m+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frequency[arr[i]]++;
    }
    for(int i=1;i<=m;i++)
        cout<<frequency[i]<<endl;

    return 0;
}
