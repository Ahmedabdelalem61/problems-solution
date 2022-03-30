#include <iostream>
#include <map>
using namespace std;
int main()
{
    int cups, m, k, dig;
    cin >> cups >> m >> k;
    map<int, bool> digsPos;
    while (m--)
    {
        cin >> dig;
        digsPos[dig] = true;
    }
    int from, to, bonePos = 1, guess = k;
    while (k--)
    {

        cin >> from >> to;

        if (digsPos[from] == bonePos || digsPos[to] == bonePos)
        {

            if (digsPos[from])
            {
                cout << from;
                return 0;
            }
            else if (digsPos[to])
            {
                cout << to;
                return 0;
            }
            else if (bonePos == from)
            {
                bonePos = to;
            }
        }
    }
    cout << bonePos;
    return 0;
}
