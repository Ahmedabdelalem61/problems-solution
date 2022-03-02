#include <iostream>
#define ull  long long
using namespace std;
ull fact(ull n){
    if(n==0) return 1;
    if (n>0) return n*fact(n-1);
};

int NCR(int n,int r){
    if(n==r) return 1;
    if (r==0&&n!=0) return 1;
    else return (n*fact(n-1))/fact(n-1)*fact(n-r);
};

int main(){
    int n,r;
    cin>>n>>r;
    ull result=(fact(n))/((fact(r))*(fact(n-r)));
    cout<<result;
    return 0;
}
