#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < (n); i++)
#define FASTINOUT            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define pb push_back
#define e end()
#define line "\n"
#define b begin()
#define ll long long
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
void solveByT()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
    }
}
int main()
{
    FASTINOUT
    int n, m;
    cin >> n >> m;
    unsigned ll steps(0), prv(1), tasks;
    loop(m){
        cin >> tasks;
        if (tasks >= prv) steps += tasks - prv;
        else steps += tasks + (n - prv);
        prv = tasks;
    }
    cout << steps << line;
    return 0;
}