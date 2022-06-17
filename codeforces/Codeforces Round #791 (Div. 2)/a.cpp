#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loopi(si, n) for (int i = si; i < (n); i++)
#define loopj(sj, m) for (int j = sj; j < (m); j++)
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
        long long n;
        cin>>n;
        if(n<3){
                cout<<-1<<line;
                continue;
        }
        if(n%6 == 0 && n%4 != 0){
            cout<<n/6<<" "<<n/6<<line;
            continue;
        }
        if(n%6 != 0 && n%4 == 0){
            cout<<n/4<<" "<<n/4<<line;
            continue;
        }

        if(n%6 == 0 && n%4 == 0){
            cout<<n/6<<" "<<n/4<<line;
            continue;
        }
        cout<<-1<<line;
    }
}
int main()
{

    FASTINOUT
    solveByT();

    return 0;
}

