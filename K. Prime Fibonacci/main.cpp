#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
bool primeCheker(int n){
if(n==2)
    return true;
if(n<2||n%2==0)
    return false;
for(int i = 3 ;i<sqrt(n);i+=2)
{
    if(n%i==0)
        return false;
}
return true;
}
long long Fibonacci(int n){
    long long n1=0, n2=1, n3;

    if(n==1)
        return 0;
    if(n==2)
        return 1;
    for(int i=0;i<n-2;i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}
int main()
{
    long long t,num;
    map<long long,bool>primes;
    map<long long,long long>fib;
    for(int i=0;i<50;i++)
        {
          fib[i+1]= Fibonacci(i+1);
          primes[i+1] = primeCheker(fib[i+1]);
        }
    cin>>t;
    while(t--){
     cin>>num;
     if(num==48)
     {
         cout<<"prime\n";
         continue;
     }
      primes[num]?cout<<"prime\n":cout<<"not prime\n";
    }

    return 0;
}
