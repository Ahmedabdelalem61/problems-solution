#include <iostream>

using namespace std;

int main()
{
    int f,s,x;
    cin>>f>>s;
    int maxx = 0,suma=0,minn = 0,sumb=0;
    while(f--){

        cin>>x;
    suma+=x;
    if(x>maxx)
        maxx = x;
    }
    while(s--){

        cin>>x;
    sumb+=x;
    if(x>minn)
        minn = x;
    }
    if(minn<=maxx&&suma==sumb)
        cout<<"Yes";
    else
        cout<<"No";



    return 0;
}
