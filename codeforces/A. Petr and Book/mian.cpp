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
#include <limits>
using namespace std;
bool sortBy(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int n;
    cin >> n;
    int pagesPerDay[8];
    for (int i = 1; i <= 7; i++)
    {
        cin >> pagesPerDay[i];
    }

    int i = 1;
    while (true)
    {
        if (i == 8)
            i = 1;
        n -= pagesPerDay[i];
        if (n <= 0)
        {
            cout << i << endl;
            return 0;
        }
        i++;
    }

    return 0;
}
