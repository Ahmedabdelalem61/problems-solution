#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n, l, r, lSum = 0, rSum = 0;
    cin >> n;
   for (int i = 1; i <= n; i++)
    {
        cin >> l >> r;
        lSum += l, rSum += r;
    }
        cout<<(min(rSum,n-rSum)+min(lSum,n-lSum))<<endl;
    return 0;
}