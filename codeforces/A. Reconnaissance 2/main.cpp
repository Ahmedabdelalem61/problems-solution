#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include<bits/stdc++.h>
#define pb push_back
#define e end
#define b begin
#define ll long long
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int n, minn  = 1001;
    cin >> n;
    int height[n];
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int r = 1,l = n;
    minn = min(abs(height[0]-height[n-1]),minn);
    for (int i = 1; i < n; i++)
    {
        int difference = abs(height[i-1]-height[i]);
        if( difference < minn)
        {
            minn =  difference;
            r = i;
            l = i+1;
        }
    }
    cout<<r<<" "<<l<<endl;
    return 0;
}
