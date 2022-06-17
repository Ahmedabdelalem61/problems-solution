#include<map>
#include<vector>
#include<string>
#define pb push_back
#define e end
#define b begin
#include<math.h>
#define ll long long
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string guest,residence,pile,sum = "";
    cin>>guest>>residence>>pile;
    map<char,int>f;
    sum = guest+residence;
    for(auto &ch:sum)
    f[ch]++;
    for(auto &ch:pile)
    f[ch]--;
    if(pile.length()!=sum.length()){
        cout<<"NO\n";
    }else{
        for(auto &ch: sum){
            if(f[ch]){
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
    }
    return 0;
}