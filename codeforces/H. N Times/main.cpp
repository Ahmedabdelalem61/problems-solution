#include <iostream>

using namespace std;

int main()
{
    int t,n;
    char C;
    cin>>t;
    while(t--){
        cin>>n>>C;
        while(n--){
            cout<<C<<" ";
        }
        cout<<endl;
    }
    return 0;
}
