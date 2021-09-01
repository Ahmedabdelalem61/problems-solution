#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long a, b, q;
    cin >> a >> b >> q;
    if (q == 1)
    {
        cout << a;
    }
    else if (q == 2)
    {
        cout << b;
    }
    else if (q >= 3)
    {
        long t;
        for (long i = 2; i < q; i++)
        {
            t;
            if(i==2)
                t = b^a;
            else
            {
                t = t^b;

            }
            b = t;
        }
        cout << t;
    }

    return 0;
}
