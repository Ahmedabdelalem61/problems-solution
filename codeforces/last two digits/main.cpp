#include <iostream>

using namespace std;

int main()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
int res = ((d%100)*(c%100)*(b%100)*(a%100));
if(res<10)
{
    cout<<res<<0;
}
else if(res>=10&&res<100)
    cout<<res;
else{
    if(res%100<10)
        cout<<0<<res%100;
    else
        cout<<res%100;
}
    return 0;
}
