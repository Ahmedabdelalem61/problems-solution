#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int>mp;
    int n,sum = 0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(mp[x]==0)
            sum++;
        mp[x]++;
    }
    cout<<sum;
    return 0;
}
