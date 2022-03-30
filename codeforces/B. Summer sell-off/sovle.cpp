

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool compareBy(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first > p2.first && p1.second > p2.second;
}
bool compare2(ll a, ll b)
{
    return a > b;
}
int main()
{
    int n,f;
    cin>>n>>f;
    int k[n],l[n];
    ll sum = 0;
    vector<pair<int ,int>> a;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i] >> l[i];
        a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
    }
    sort(a.rbegin(), a.rend());

    long long ans = 0;
    for (int i = 0; i < f; i++)
    {
        int pos = a[i].second;
        ans += min(2 * k[pos], l[pos]);
    }
    for (int i = f; i < n; i++)
    {
        int pos = a[i].second;
        ans += min(k[pos], l[pos]);
    }
    cout << ans;
    return 0;
}
