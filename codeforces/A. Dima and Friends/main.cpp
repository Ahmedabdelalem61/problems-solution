#include <map>
#include <vector>
#include <string>
#define pb push_back
#define e end
#define b begin
#include <math.h>
#define ll long long
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x,sum = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    int numberOFWays = 0;
    for(int i =1;i<=5;i++){
        if((sum+i)%(n+1)!=1)
            numberOFWays++;
    }
    cout<<numberOFWays<<endl;

    return 0;
}