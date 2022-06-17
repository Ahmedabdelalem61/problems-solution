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
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        bool firstTime = true;
        pair<int, int> initialRobot;
        loopi(0, n)
        {
            loopj(0, m)
            {
                cin >> arr[i][j];
                if (firstTime && arr[i][j] == 'R')
                {
                    firstTime = false;
                    initialRobot = {i, j};
                }
            }
        }

        if(n == 1){
            cout <<"YES\n";
            continue;
        }

        bool done = true;
        loopi(0, n)
        {
            loopj(0, m)
            {
                if (arr[i][j] == 'R' && i > initialRobot.first && j < initialRobot.second)
                {
                    done = false;
                    break;
                }
            }
        }

        if (done)
        {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
int main()
{

    FASTINOUT
    solveByT();

    return 0;
}
