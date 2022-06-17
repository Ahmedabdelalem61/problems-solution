#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loopi(n) for (int i = 0; i < (n); i++)
#define loopj(m) for (int j = 0; j < (m); j++)
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
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string str;
    cin>>str;
    int w = 0, e = 0,n = 0,s = 0;
    int compX = ex-sx;
    int compY = ey-sy;
    int neededW = 0,neededS = 0,neededE = 0,neededN = 0;

    if(compX>0){
        neededE = abs(compX);
    }else if(compX<0){
        neededW = abs(compX);
    }

    if(compY>0){
        neededN = abs(compY);
    }else if(compY<0){
        neededS = abs(compY);
    }

    if (neededE == neededW && neededS == neededN && neededE == 0 && neededS == 0){
        cout<<0<<line;
        return 0;
    }

    for(int i = 0 ; i<t ; i++){
        if(neededE > 0 && str[i] == 'E')
            neededE--;
        if(neededW > 0 && str[i] == 'W')
            neededW--;
        if(neededS > 0 && str[i] == 'S')
            neededS--;
        if(neededN > 0 && str[i] == 'N')
            neededN--;
         if (neededE == neededW && neededS == neededN && neededE == 0 && neededS == 0){
             cout<<i+1<<line;
             return 0;
         }
    }

    cout<<-1<<line;



    return 0;
}


