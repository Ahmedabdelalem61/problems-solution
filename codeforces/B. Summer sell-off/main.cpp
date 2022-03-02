#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool compareBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.first;
}
bool compare2(int a, int b)
{
    return a > b;
}
int main()
{
    int days, chosen_Days;
    cin >> days >> chosen_Days;
    int products[days + 1], clints[days + 1];
    vector<pair<int, int>> newProduct;
    map<int, bool> mp;
    for (int i = 0; i < days; i++)
    {
        cin >> products[i] >> clints[i];
        if (clints[i] == 0 || products[i] == 0)
            continue;
        if (products[i] < clints[i])
        {
            newProduct.push_back(make_pair(min(products[i] * 2, clints[i]), i));
            mp[i] = false;
        }
    }
    sort(newProduct.begin(), newProduct.end(), compareBy);
    int sum = 0;
    

        for (auto &p : newProduct)
        {
            sum += p.first;
            mp[p.second] = true;
        }
        int length = days - newProduct.size();
        sort(products, products + days, compare2);
        for (int i = 0; i < days; i++)
        {
            if (length == 0)
                break;
            if (mp[i] == false)
            {
                sum += products[i];
                length--;
            }
        }
    cout << sum << endl;
    return 0;
}