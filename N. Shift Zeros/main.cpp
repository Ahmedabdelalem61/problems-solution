#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> zeroes;
    vector<int> nums;
    vector<vector<int> > concat;
    for(int i=0;i<n;i++){
        if(arr[i])
            nums.push_back(arr[i]);
        else
            zeroes.push_back(arr[i]);
    }
    concat.push_back(nums);
    concat.push_back(zeroes);
    for (int i = 0; i < concat.size(); i++) {
        for (int j = 0; j < concat[i].size(); j++)
            cout << concat[i][j] << " ";
    }
    return 0;
}
