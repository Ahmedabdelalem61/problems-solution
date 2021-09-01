#include <iostream>

using namespace std;

int main()
{
    int n,q,z,x;
    cin>>n>>q;
    int arr[n+1]={0};
    while(q--){
        cin>>z>>x;
        if(z==1)
            arr[x]++;
        else
            cout<<arr[x]<<endl;
    }
    return 0;
}
