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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, x;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = make_pair(ceil(x / (m * 1.0)), i + 1);
    }
    int max = v[0].first, maxIndex = v[0].second;
    for (auto &number : v)
    {
        if (number.second > maxIndex && number.first >= max)
        {
            maxIndex = number.second;
            max = number.first;
            // cout<<"\nmax index is : "<<maxIndex<<" numer is : "<<max<<endl;
        }
    }
    cout << maxIndex << endl;
    return 0;
}