#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool compareBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first && p1.second < p2.second;
}
bool compare2(int a, int b)
{
    return a > b;
}
int main()
{
    int n, m, waste, query;
    cin >> n >> m >> waste >> query;
    vector<pair<int, int>> indecies;
        map<pair<int,int>, bool> mp;

    while (waste--)
    {
        int x, y;
        cin >> x >> y;
        indecies.push_back(make_pair(x,y));
        mp[make_pair(x,y)] = true;
    }

    sort(indecies.begin(),indecies.end(),compareBy);
    while (query--)
    {
        int x, y,c = 0;
        cin >> x >> y;
        for(auto &p:indecies){
            if(p.first<=x && p.second<=y){
                c++;
            }else{
                break;
            }
        }

        int pos = ( x*y )-c;
     //   cout<<"\nPOSSS: "<<pos<<" CCCC : "<<c<<endl;
        /*
           6 6 3 3

           + + + 1 2 3
           1 2 3 1 2 3
           1 2 3 1 2 3
           1 2 3 1 2 3
           1 2 3 1 2 3
           1 2 3 1 2 3

        */
        auto p = make_pair(x,y);
        if(mp[p])
        cout<<"Waste"<<endl;
        else if(pos%4 == 1 ){
            cout<<"Carrots"<<endl;
        }else if(pos%4 == 2)
        cout<<"Kiwis"<<endl;
        else if(pos%4 == 3)
        cout<<"Grapes"<<endl;
      //  cout<<"\n rem : "<<pos%3<<endl;
    }
    return 0;
}
