#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
     long long n,a,b,minn=1;
     cin>>n>>a>>b;
     long long arr[10];
     long long mult,add,c=5;
     for(int i=0;i<5;i++){
        mult = a*minn;
        add = b + minn;
        minn = min(mult,add);
        arr[i] = mult;
        arr[c] = add;
        c++;
     }
     for(int i=0;i<10;i++){
        if(n==arr[i])
        {
            cout<<"yes\n";
            break;
        }
        else if(i==9){
            cout<<"no\n";
        }
     }

     }

    return 0;
}
