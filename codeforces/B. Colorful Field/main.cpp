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
    int n, m, waste, query;
    cin >> n >> m >> waste >> query;
    char arr[n + 1][m + 1];
    map<pair<int,int>,bool> is_black;
    while (waste--)
    {
        int x, y;
        cin >> x >> y;
        is_black [make_pair(x,y)] = false;
        arr[x][y] = 'b';
        if(arr[x][y] == 'b')
        is_black [make_pair(x,y)] = true;
    }
    int determin = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
                    cout<<"aaa";

            if(determin == 4)
                determin = 1;
            if(is_black[make_pair(i,j)] == true)
                continue;
            else if (determin == 1)
                arr[i][j] = 'c';
            else if (determin == 2)
                arr[i][j] = 'k';
            else if (determin == 3)
                arr[i][j] = 'g';
            determin++;
        }
    }
    map<char, string> mp;
    mp['c'] = "Carrots";
    mp['k'] = "Kiwis";
    mp['g'] = "Grapes";
    mp['b'] = "Waste";
    while (query--)
    {
        int x, y;
        cin >> x >> y;
        cout << mp[arr[x][y]] << endl<<flush;
    }
    return 0;
}