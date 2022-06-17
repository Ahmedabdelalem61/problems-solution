#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loopi(s,n) for (int i = s; i < (n); i++)
#define loopj(s,m) for (int j = s; j < (m); j++)
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
        
    }
}
int main()
{

    FASTINOUT
    //solveByT();
    int n = 6;
    int grid[n][n];
    loopi(1,n)
        loopj(1,n)
            cin>>grid[i][j];

    int ans = 0,people[n];
    loopi(1,n)
        people[i] = i;
    
    int mx = INT_MIN;
    do{
        //1234   5
        ans = grid[people[1]][people[2]]+
        grid[people[2]][people[1]]+grid[people[3]][people[4]]+grid[people[4]][people[3]];
        //2345
       ans+= grid[people[3]][people[2]]+
        grid[people[2]][people[3]]+grid[people[5]][people[4]]+grid[people[4]][people[5]];
        //34     5
        ans+=grid[people[3]][people[4]]+grid[people[4]][people[3]];
        //45
        ans+=grid[people[5]][people[4]]+grid[people[4]][people[5]];
        if(ans>mx)
            mx = ans;
    }while (next_permutation(people+1,people+n));
    
    cout<<mx<<line;
    return 0;
}


