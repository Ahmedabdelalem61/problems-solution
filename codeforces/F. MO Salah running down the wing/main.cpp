#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(!d&&b<a*c)
        {
            cout<<-1<<endl;
            continue;
        }
        int ans = (c*a)+(d*a);
        cout<<ans-b<<endl;
    }
    return 0;
}
