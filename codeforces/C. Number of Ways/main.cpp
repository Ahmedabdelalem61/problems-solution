#include <iostream>
#include <bits/stdc++.h>

long long f(long long i) {
   if(1 == i) {
      return 1;
   } else if(1 > i) {
      return -1;
   }

   return i * f(i - 1);

}
int nCr(int n, int r) {
    return f(n) / (f(r) * f(n - r));
}

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    /*
    int for_n,for_k;
    if(n==1 && k==1 ){
        cout<<0;
        return 0;
    }
    else if(n==1){
        for_n = 0;
        for_k = nCr(k,2);
        cout<<for_n+for_k;
        return 0;
    }
    else if(k==1){
        for_k = 0;
        for_n = nCr(n,2);
        cout<<for_n+for_k;
        return 0;
    }
    for_n = nCr(n,2);
    for_k = nCr(k,2);
    cout<<"for n : "<<for_n<<endl;
    cout<<"for k : "<<for_k<<endl;
    cout<<for_n+for_k;*/
    n--;
    k--;
    int first = (n)*(n+1)/2;
    int sec = (k)*(k+1)/2;
    cout<<first+sec;
    return 0;
}
