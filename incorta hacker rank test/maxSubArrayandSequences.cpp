#include <bits/stdc++.h>
using namespace std;
vector<int> maxSubarray(vector<int> arr) {
    int maxTillNow = 0;
    int maxTillEnd = 0;
    int sum = 0;
    if(arr.size() == 1)
     return {arr[0],arr[0]};
    for(int &n:arr){
        if(n > 0)
        sum+=n;
        maxTillNow+=n;
        maxTillNow = max(maxTillNow,n);
        maxTillEnd = max(maxTillEnd,maxTillNow);
    }
    if(maxTillEnd == 0)
    maxTillEnd = -1;
    if(sum == 0) sum = -1;
    return {maxTillEnd,sum};
}

int main()
{
    vector<int> res = maxSubarray({1 ,-1 ,-1, -1, -1, 5});
    for(int &i:res)
    cout<<i;
    return 0;
}