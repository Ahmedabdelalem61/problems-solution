#include <iostream>

using namespace std;

int main()
{
    int t,l,r,k;
    cin>>t;
    while(t--){

        cin>>l>>r>>k;
        if(l==1 && r==1){
            cout<<"NO\n";
            continue;
        }
        if(r==l && l>1){
            cout<<"YES\n";
            continue;
        }
        if(k==0){
            cout<<"NO\n";
            continue;
        }

        int numberOfOdds = (r-l+1)-(r/2-(l-1)/2);
        if(numberOfOdds <= k) cout<<"YES\n";
        else cout<<"NO\n";
    }



    return 0;
}
