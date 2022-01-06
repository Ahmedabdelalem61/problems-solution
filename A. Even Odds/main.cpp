#include <iostream>

using namespace std;

int main()
{

    long long n,k,mid;
    cin>>n>>k;
    mid = n/2;
    if(mid%2==1)
      mid++;
    if(k<=mid)
      cout<< (k-1)*2+1;
    else
       cout<<(k-mid)*2;

    return 0;
}
