#include <iostream>

using namespace std;
int g = 1;
int print(int n){
if(n==0)
    return 0;
if(n==g)
  cout<<n;
else
cout<<n<<" ";
return print(n-1);
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
