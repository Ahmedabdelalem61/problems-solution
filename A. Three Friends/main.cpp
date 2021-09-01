#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a,b,c;
    cin>>q;
    while(q--){
        cin>>a>>b>>c;
        int ans =abs(a - b) + abs(a - c) + abs(b - c) ;
        for(int i=-1;i<=1;++i){
          for(int j=-1;j<=1;++j){
            for(int k=-1;k<=1;++k)
               {
                    int na = i + a;
                    int nb = j + b;
                    int nc = k + c;

                    int current = abs(na - nb) + abs(na - nc) + abs(nb - nc);
                    ans = min(ans, current);
               }
        }
    }
    cout<<ans<<endl;
   }

    return 0;
}
