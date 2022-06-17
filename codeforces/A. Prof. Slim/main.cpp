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
        int n,lastnegative = 0,firstPostive = -1;
        cin>>n;
        int arr[n+1];
        loopi(1,n+1)
            {
                cin>>arr[i];
                if(arr[i]<0){
                    lastnegative = i;
                }
            }
        if(is_sorted(arr+1,arr+n+1)){
            {
                cout<<"YES\n";
                continue;
            }
        }else{
            loopi(1,n+1){
                if(arr[i]>0 ){
                    firstPostive = i;
                    while (lastnegative >firstPostive && arr[lastnegative]>0)
                    {
                        lastnegative--;
                    }
                    if(lastnegative >firstPostive && arr[lastnegative]<0){
                        arr[firstPostive] *=-1;
                        arr[lastnegative]*=-1;
                    }
                }
            }
        }
        if(is_sorted(arr+1,arr+n+1)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
int main()
{

    FASTINOUT
    solveByT();
   
    return 0;
}


