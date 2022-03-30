#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
bool compareBy(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first > p2.first && p1.second > p2.second;
}
bool compare2(ll a, ll b)
{
    return a > b;
}
int main()
{
    ll days, chosen_Days, p, c;
    cin >> days >> chosen_Days;
    map<pair<ll, ll>, bool> mp;
    vector<pair<ll, ll>> newProduct, product;
    for (ll i = 0; i < days; i++)
    {
        cin >> p >> c;
        product.push_back(make_pair(p, c));
        newProduct.push_back(make_pair(p * 2, c));
    }
    sort(newProduct.rbegin(), newProduct.rend());
    sort(product.rbegin(), product.rend());
    ll sum = 0;
    // cout << endl;
    // for (auto &p : newProduct)
    //     cout << " fisrst: " << p.first << " second : " << p.second;
    // cout << endl;
    // for (auto &p : product)
    //     cout << " fisrst: " << p.first << " second : " << p.second;
    // cout << endl;
    for (auto &new_p : newProduct)
    {
        if (min(new_p.first, new_p.second) <= min(product.begin()->first, product.begin()->second) || chosen_Days == 0)
            break;
        sum += min(new_p.first, new_p.second);
      //  cout << "\n choosed from new : " << min(new_p.first, new_p.second)<<"chosen days remain are :"<<chosen_Days;
        pair<ll, ll> refactor;
        refactor = make_pair(new_p.first / 2, new_p.second);
        mp[refactor] = true;
        chosen_Days--;
    }
    //cout << endl;
    for (auto &old_p : product)
    {
        if (mp[old_p] == false)
        {
            if(chosen_Days>0)
            sum += min(old_p.first*2, old_p.second);
            else
            sum += min(old_p.first, old_p.second);
      //      cout << "\n choosed from old : " << min(old_p.first, old_p.second);
            chosen_Days--;
        }
    }
    //cout << endl;
    cout << sum << endl;
    return 0;
}