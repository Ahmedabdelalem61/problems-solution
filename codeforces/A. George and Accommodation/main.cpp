#include <iostream>

using namespace std;

int main()
{
    int inroom,capacity,n,cnt = 0;
    cin>>n;
    while(n--){
        cin>>inroom>>capacity;
        if(capacity-inroom>=2)
            cnt++;
    }
    cout<<cnt;

    return 0;
}
