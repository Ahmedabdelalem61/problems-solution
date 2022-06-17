#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
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
    int n,take, index;
    double minn = 10e9+1;
    bool flag = true;
    cin>> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> take;
        if (take < minn)
        {
            minn = take;
            index = i;
            flag = 1;
        }
        else if (take == minn)
            flag = false;
        
    }
    if (flag == 1)
        cout << index << endl;
    else
        cout << "Still Rozdil\n";
    
    return 0;
}
