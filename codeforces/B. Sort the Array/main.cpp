#include <iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    return a<=b;
}
bool compare2(int a,int b){
    return a>=b;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int same[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        same[i] = arr[i];
    }

    if(is_sorted(arr,arr+n,compare)){
        cout<<"yes\n"<<1<<" "<<1;
        return 0;
    }
    if(is_sorted(arr,arr+n,compare2)){
        cout<<"yes\n"<<1<<" "<<n;
        return 0;
    }
    bool diff[n] = {0};
    sort(arr,arr+n);
    int l = 0,r = 0;
    bool flag = true;
    for(int i=0;i<n;i++){
        diff[i] = arr[i]!= same[i];
       // cout<<deference[i];
        if(diff[i]&& flag ){
            l = i;
            flag = false;
        }
    }
    r = l;
   // make sure to loop over all starting from l
   for(int i = l ; i<n;i++)
       if(diff[i])r = i;

    if(is_sorted(same+l,same+r+1,compare)||is_sorted(same+l,same+r+1,compare2)){
        sort(same+l,same+r+1,compare);
        if(is_sorted(same,same+n,compare)){
            cout<<"yes\n"<<l+1<<" "<<r+1;
            return 0;
        }
    }
    // cout<<endl<<"l is : "<<l<<" r is :  "<<r<<endl;
    cout<<"no";
    return 0;
}
