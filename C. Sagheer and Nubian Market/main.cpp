#include <bits/stdc++.h>
#define ll long long
#include<iostream>
using namespace std;


const int N = 1e5 + 5;
int n, S;
int a[N];
ll b[N];

ll res(int k)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] + (i + 1) * (ll) k;
    }
    sort(b, b + n);
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += b[i];
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>S;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n + 1;
        while (l < r - 1)
        {
            int m = (l + r) / 2;
            if (res(m) <= S)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        cout<<l<<' '<<res(l)<<'\n';


    return 0;
}
