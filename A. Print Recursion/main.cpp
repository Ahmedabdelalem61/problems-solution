#include <iostream>

using namespace std;
int print(int n){
 if(n==0)
    return 0;
 cout<<"I love Recursion\n";
 n--;
 return print(n);
}
int main()
{
   int n;
   cin>>n;
   print(n);
    return 0;
}
