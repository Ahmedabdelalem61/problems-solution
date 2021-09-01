#include <iostream>

using namespace std;

int main()
{
    int n,p,q,sum =0 ;
    cin>>n;

    while(n--){
        cin>>p>>q;
        if(q-p>=2)
            sum++;
    }
    cout<<sum;
    return 0;
}
