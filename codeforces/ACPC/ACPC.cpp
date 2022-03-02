#include<iostream>
#include<vector>
#include<string.h>
#define pb push_back
#define ll long long
#include<math.h>
#include <algorithm>

using  namespace std;
void Bucket(float arr[], int n)
{
    vector<float> Buckets[n];

    for (int i = 0; i < n; ++i)
    {
        int divide = n * arr[i];
        Buckets[divide].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++)
        sort(Buckets[i].begin(), Buckets[i].end());

    int c = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < Buckets[i].size(); ++j)
            arr[c++] = Buckets[i][j];
}

int main()
{
    int n;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    Bucket(arr, n);

    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}





