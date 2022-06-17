#include <map>
#include <vector>
#include <string>
#define pb push_back
#define e end
#define b begin
#include <math.h>
#define ll long long
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 33 && str[i] <= 126)
        {
            if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}