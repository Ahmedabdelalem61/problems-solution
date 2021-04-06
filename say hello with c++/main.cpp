#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int  a,b,c,d;
    cin>>a>>b>>c>>d;

    long long result1 = pow(2, 1000);
    long long result2 = pow(3, 999);
    cout<<result1<<" "<<result2<<endl;
    result1>result2 ? cout<<"YES" : cout<<"NO";
    return 0;
}
