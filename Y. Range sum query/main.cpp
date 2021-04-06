#include <iostream>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long prefix_sum[n];
    prefix_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        int l,r;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        if(l-2>=0)
        cout<<prefix_sum[r-1]-prefix_sum[l-2]<<endl;
        else
           cout<<prefix_sum[r-1]<<endl;
    }
    return 0;
}
