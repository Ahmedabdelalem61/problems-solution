#include <map>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <limits>
#include <bits/stdc++.h>
#define loop(n)          for(int i = 0; i < (n); i++)
#define FASTINOUT    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
void solveByT(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
    }
    
}
int main()
{
    FASTINOUT
    int n,x,fives(0),zeros(0); //not sum onley number of fives
    cin>>n;
    loop(n){
        cin>>x;
        x?fives++:zeros++;
    }

    if(fives == n) // no thing devisible by 90 as 90 = 9 * 10 may be dev by 9 but not 10 at the prv case
        cout<<-1<<line;
    else if(fives<9) // at least we need 9 fives and 90 devisible by 0
        cout<<0<<line;
    else{
        fives -= fives % 9; // remove the repetition that makes the 90 un multible of that number
        loop(fives)
            cout <<5;
        loop(zeros) 
            cout <<0;
    }
    cout<<line;
    return 0;
}