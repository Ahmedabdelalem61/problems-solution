#include<iostream>
using namespace std;

int main()
{

int n, cont = 0;
    cin >> n;
    string s;
    cin >> s;
    int b1 = 0, r1 = 0, b2 = 0, r2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && s[i] == 'b')
        {
            b1++;
        }
        else if (i % 2 == 1 && s[i] == 'r')
        {
            r1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1 && s[i] == 'b')
        {
            b2++;
        }
        else if (i % 2 == 0 && s[i] == 'r')
        {
            r2++;
        }
    }
    int first = max(b1, r1);
    int sec = max(b2, r2);
    if (first > sec)
    {
        cout << sec;
    }
    else
    {
        cout << first;
    }
    return 0;

}
