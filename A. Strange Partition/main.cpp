#include <iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--){
    long long n,x,a,mini=0,maxi=0;
    cin>>n>>x;
    while(n--){
        cin>>a;
        mini += a;
        maxi +=(a+x-1)/x;
    }
    mini = (mini+x-1)/x;
    cout<<mini<<' '<<maxi<<"\n";
}


    return 0;
}
