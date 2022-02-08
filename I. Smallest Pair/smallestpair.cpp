#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        int minn = 2005000;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int i = 1;
        int j = i+1;
            for(;i<j;i++){
                for( j =  i+1;j<=n;j++){
                    minn = min(minn,arr[i-1]+arr[j-1]+(j-i));
                }
            }
        cout<< minn<<endl;
    }
    
    return 0;
}