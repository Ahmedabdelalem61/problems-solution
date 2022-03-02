#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,l,r,k;
    while(t--){
        int sum = 0,c=0;
        cin>>n>>l>>r>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]>=l && arr[i]<=r && sum + arr[i] <= k){
                c++;
                sum+=arr[i];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
