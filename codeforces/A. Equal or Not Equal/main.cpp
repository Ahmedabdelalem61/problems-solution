#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    int n = 0;
    for(char &ch:str){
        if(ch == 'N')
        n++;
    }
    if(n!=1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
} 