#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,t;
ll w;
vector<pair<int, int> > v;
bool solve() {
    sort(v.rbegin(), v.rend());
    vector<pair<int, int> > ans;
    ll sum = 0;
    for(auto i : v) {
        if(i.first > w)
            continue;
        sum += i.first;
        ans.push_back(i);
        if(sum >= (w + 1) / 2) {

            cout << ans.size() << "\n";
            for(auto j : ans)
                cout << j.second << " ";
            cout << "\n";
            return true ;
        }
    }
    return false;
}
int main()
{
   ios::sync_with_stdio(false);cin.tie(0);

   cin >> t;
   while(t--)
   {
      cin >> n >> w;
      for (int i = 0 ; i < n ; ++i)
      {
         int x;
         cin >> x;
         v.push_back({x,i+1});
      }
      if (!solve())
        cout << "-1\n";
      v.clear();
   }
   return 0;
}
