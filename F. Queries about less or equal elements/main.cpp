#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int na,nb;
    cin>>na>>nb;
    int a[na],b[nb];
    for(int i=0;i<na;i++)
        cin>>a[i];
    for(int i=0;i<nb;i++)
        cin>>b[i];
    sort(a,a+na);
    for(int i=0;i<nb;i++){
        int index = lower_bound(a,a+na,b[i]+1)-a;
        cout<<index<<" ";
    }

    return 0;
}
