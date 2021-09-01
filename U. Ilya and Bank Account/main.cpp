#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int var;
    cin>>var;
    if(var<0&&var>-100){
        int rem1 = var%10;
        var = var/10;
        int rem2 = var%10;
        if(abs(rem1)<abs(rem2))
            cout<<rem1;
        else
            cout<<rem2;
    }else if(var<0&&var<=-100){
        int rem1 = var%10;
        var = var/10;
        int rem2 = var%10;
        var = var/10;
       // cout<<rem1<<" "<<rem2<<" "<<var<<endl;
        if(abs(rem1)<abs(rem2))
            cout<<var<<abs(rem1);
        else
            cout<<var<<abs(rem2);
    }else
    cout<<var;

    return 0;
}
