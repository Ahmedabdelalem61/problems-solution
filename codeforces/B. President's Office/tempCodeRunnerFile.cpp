#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, sum = 0;
    char ch;
    cin >> r >> c >> ch;
    char arr[r][c];
    map<char, bool> mp;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            mp[arr[i][j]] = true;
        }
    }
    // to check if the office new and beside the president office
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != '.' && mp[arr[i][j]] && arr[i][j] != ch)
            {
                if (i + 1 < r && j < c)
                {
                    if (arr[i + 1][j] == ch)
                    {
                        sum++;
                        mp[arr[i][j]] = false;
                        //cout << arr[i][j] << endl;
                    }
                }
                if (i < r && j + 1 < c)
                {
                    if (arr[i][j + 1] == ch)
                    {
                        sum++;
                        mp[arr[i][j]] = false;
                        //cout << arr[i][j] << endl;
                    }
                }
                if (i - 1 >= 0 && j < c)
                {
                    if (arr[i - 1][j] == ch)
                    {
                        sum++;
                        mp[arr[i][j]] = false;
                        //cout << arr[i][j] << endl;
                    }
                }
                if (i < r && j - 1 >= 0)
                {
                    if (arr[i][j - 1] == ch)
                    {
                        sum++;
                        mp[arr[i][j]] = false;
                       // cout << arr[i][j] << endl;
                    }
                }
            }
            else
            {
                continue;
            }
        }
    }

    cout << sum << endl;

    return 0;
}