#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * x;
        x--;
        if (x == 0)
        {
            x = 1;
        }
    }

    cout << sum;
    return 0;
}