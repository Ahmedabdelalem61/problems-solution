#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double t,n,c1,c2;
    cin>>t;
    while(t--){
        cin>>n;
        int c1 = ceil(n/3);
        int c2 = floor(n/3);
        if((c1*1)+(c2*2)==n)
        cout<<c1<<" "<<c2<<endl;
        else
        cout<<c2<<" "<<c1<<endl;
    }
    return 0;
}
