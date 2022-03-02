#include <iostream>
using namespace std;
int main()
{
int n,t;
cin>>t;
while(t--){
int sum=0,m;
cin>>n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
cout<<sum<<endl;
}

return 0;
}
