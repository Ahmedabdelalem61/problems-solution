#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loopi(s, n) for (int i = s; i < (n); i++)
#define loopj(s, m) for (int j = s; j < (m); j++)
#define vi vector<int>
#define FASTINOUT            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define pb push_back
#define line "\n"
#define ll long long
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
bool sortDecreasing(int i1, int i2)
{
    return i1 > i2;
}
int findFact(int n)
{
    return n == 1 ? 1 : n * findFact(n - 1);
}
unsigned ll factorial(unsigned ll n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}
ll findNpR(ll n, ll r)
{
    return factorial(n) / factorial(n - r);
}
int findNcR(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}
void solveByT()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin>>n;
        cin>>q;
        int arr[n];
        int mn = INT_MAX,total = 0;
        loopi(0,n)
        {
            cin>>arr[i];
            total+=arr[i];
            mn = min(mn,arr[i]);
        }

        sort(arr,arr+n,sortDecreasing);
        loopi(1,n){
            arr[i] = arr[i-1]+arr[i];
        }

        int x;
        while (q--)
        {
            int asn = -1;
            int l = 1, r = n;
            cin>>x;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(arr[mid - 1] >= x) {
                    asn = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << asn << line;
        }
        
    }
}
int main()
{

    FASTINOUT
    solveByT();
    
    return 0;
}
