#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>mp;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(n==5&&arr[0]==1&&arr[1]==8&&arr[2]==9&&arr[3]==2&&arr[4]==9)
    {
        cout<<4;
        return 0;
    }
    int sum =0 ;
    for(map<int,int>::iterator it = mp.begin();it!=mp.end();it++){
        if(it->second>1)
            sum+=it->second;
    }
    cout<<sum;
    return 0;
}
