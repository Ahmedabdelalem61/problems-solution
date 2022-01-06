#include <iostream>

using namespace std;
long long s(long long n){
return n*(n+1)/2;
}

long long sum(long long st,long long e){
       if (st<=1)
       return s(e);
return s(e)-s(st-1);
}

long long optmize(long long n,long long  k){
   long long st,en;
   st = 1;
   en = k;
   while(st<en){
   long long mid  = ((st+en)/2);
   long long s = sum(mid,k);
   if(s==n)
   return k-mid+1;
   if(s>n)
   st = mid+1;
   else
   en = mid;
   }
   return k-st+2;
}

int main()
{
    long long n,k;
    cin>>n>>k;


    if(n==1)
    cout<<0;
    else if(n<=k)
    cout<<1;
    else
    {
      k--;
      n--;
      if(n>s(k)){
        cout<<-1;
        return 0;
      }

      cout<<optmize(n,k);
    }

    return 0;
}
