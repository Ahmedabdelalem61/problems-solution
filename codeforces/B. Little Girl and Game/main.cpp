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
    string str;
    cin>>str;
    map<int,string> res;
    res[0] = "First\n";
    res[1] = "Second\n";
    map<char,int>f;
    for(auto &ch:str){
        f[ch]++;
    }
    int odds(0);
    for(auto &mp:f){
        odds+= mp.second%2 == 1;
       // cout<<mp.first<< " "<<mp.second<<line;
    }
   // cout<<odds<<line;
    odds--;
    if(odds <= 0)
        cout<<res[0];
    else if(odds == 1){
        cout<<res[1];
    }else{
        odds%2 == 0? cout<<res[0]:cout<<res[1];
    }
    return 0;
}

