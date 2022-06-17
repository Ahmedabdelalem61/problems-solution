#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define pb push_back
#define e end()
#define b begin()
#define ll long long
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n >= 1900)
        {
            cout << "Division 1"<<endl;
        }
        else if (n <= 1899 && n >= 1600)
            cout << "Division 2"<<endl;
        else if (n <= 1599 && n >= 1400)
            cout << "Division 3"<<endl;
        else
        {
            cout << "Division 4"<<endl;
        }
    }

    return 0;
}

