#include <iostream>

using namespace std;

int main()
{
    int n,m,t=0;
    cin>>n>>m;

    if(n>=m)
    {
        for(int i = m ;i<=n ; i+=m)
        {
            if(i*2>=n){
                cout<<i;
                return 0;
            }
        }
    }
    else{
        cout<<-1;
    }

    return 0;
}
