#include <iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;
    if(n==1||n==2)
    {
        cout<<"YES";
        return 0;
    }
    while(true){
        n = n/2.0;
        if(n==2){
            cout<<"YES";
            return 0;
        }
        if( n < 2.0)
        {
            cout<<"NO";
            return 0;
        }
    }
    return 0;
}
