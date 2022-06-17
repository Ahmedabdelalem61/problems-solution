#include<map>
#include<vector>
#include<string>
#define pb push_back
#define e end
#define b begin
#include<math.h>
#define ll long long
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int allAmountOfMilliliter = ((l*k)/nl);
    int allAmountOflimes = d*c;
    int allAmountOFSalt = p/np;
    cout<<(min(min(allAmountOFSalt,allAmountOfMilliliter),allAmountOflimes))/n<<endl;
    return 0;
}