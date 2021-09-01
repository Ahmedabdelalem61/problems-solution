#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c;
        int diff = abs(a-b);
        if(c>a&&c<b)
            d = c+diff;
        else
            d = c-diff;
        int maxxfirst = max(a,b);
        int maxxSecend = max(c,d);

        int minnfirst = min(a,b);
        int minnSecend = min(c,d);

        if(abs(maxxfirst-maxxSecend)==abs(minnfirst-minnSecend))
            cout<<d<<endl;
        else
            cout<<-1<<endl;

    }
    return 0;
}
