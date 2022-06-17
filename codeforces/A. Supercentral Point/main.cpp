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
#include <limits>
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int n;
    cin>>n;
    int c=0;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        bool r=false; 
        bool l=false;
        bool u=false;
        bool d=false;
        for(int j=0;j<n;j++)
        {
            if(x[j]>x[i]&&y[j]==y[i])
            {
                r = true;
            }
            if(x[j]<x[i]&&y[j]==y[i]) 
            {
                l = true;
            }
            if(x[j]==x[i]&&y[j]>y[i])
            {
                u = true;
            }
            if(x[j]==x[i]&&y[j]<y[i])
            {
                d = true;
            }
        }
        if(r&&l&&u&&d)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
