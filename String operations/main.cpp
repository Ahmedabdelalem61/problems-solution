#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);

     int n,q,x;
     cin>>n>>q;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     sort(arr,arr+n);

     string str;
     while(q--){
        cin>>str>>x;
     if(str=="binary_search ")
       {
            int binary = binary_search(arr,arr+n,x);
            if(binary)
                cout<<"found"<<endl;
            else
                cout<<"not found"<<endl;
       }
       else if(str=="lower_bound "){
        int l =lower_bound(arr,arr+n,x)-arr;
        if(l!=n)
            cout<<arr[l]<<endl;
        else
            cout<<-1<<endl;
       }
       else if(str=="upper_bound "){
        int U =upper_bound(arr,arr+n,x)-arr;
        if(U!=n)
            cout<<arr[U]<<endl;
        else
            cout<<-1<<endl;
       }
     }

    return 0;
}
