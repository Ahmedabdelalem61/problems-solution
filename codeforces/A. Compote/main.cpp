#include <iostream>

using namespace std;

int main()
{
    int a,b,c,i=0;
    cin>>a>>b>>c;
    while(true){
        a-=1;
        b-=2;
        c-=4;
        if(a>=0&&b>=0&&c>=0)
            i++;
        else
            break;
    }
    cout<<i*7;
    return 0;
}
