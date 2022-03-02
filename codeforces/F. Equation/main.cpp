#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,pw = 2 ,n;
    cin>>x>>n;
    long long sum = 0;
    while(pw<=n){
        sum+= pow(x,pw);
        pw+=2;
    }
    cout<<sum;
    return 0;
}
