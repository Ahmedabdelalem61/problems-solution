#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,Ax,Ay,Bx,By,fx,fy;
    cin>>t;
    while(t--){
        int c = 0;
        cin>>Ax>>Ay>>Bx>>By>>fx>>fy;
        if(Ax==Ay&&Bx==By&&fx==fy&&fx==Bx&&fx==Ax)
        {
            cout<<0<<endl;
            continue;
        }
        int maxx = max(Ax,Bx);
        int maxy = max(Ay,By);
        if((fx<=maxx&&fy>=maxy||fx<=maxx&&fy<=maxy )|| fx>=maxx&&fy<=maxy||fx>=maxx&&fy>=maxy){
           if((fx==Ax&&fx==Bx) || (fy==Ay&&fy==By))
            c+=2;
            c+= abs(Ax-Bx)+abs(By-Ay);
            if(fx==fy && Ax==Bx && Ax== fx)
                c-=2;
            if(fx==fy && Ay==By && Ay== fx)
                c-=2;
        }
        else{

        if(fx==fy && Ax==Bx && Ax== fx)
                c-=2;
        if(fx==fy && Ay==By && Ay== fx)
                c-=2;
        if((fx==Ax&&fx==Bx) || (fy==Ay&&fy==By))
            c+=2;
        c+= abs(Ax-Bx)+abs(By-Ay);
        }

    cout<<c<<endl;
    }
    return 0;
}
