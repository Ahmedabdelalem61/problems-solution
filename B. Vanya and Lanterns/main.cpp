#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,st_len;
    cin>>n>>st_len;
    double lantern_pos[1001];
    for(int i=0;i<n;i++)
       cin>>lantern_pos[i];

    sort(lantern_pos,lantern_pos+n);
    //get the maximum of every two lanterns
    double maxx=max(lantern_pos[0],st_len-lantern_pos[n-1])*2;
    for(int i=1;i<n;i++)
        maxx = max((lantern_pos[i]-lantern_pos[i-1]),maxx);
    cout.precision(20);
    cout<<maxx/2.0;
    return 0;
}
