#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int generateDevisorslength(long long n){
vector<long long> v;
long long i=1;
for(i;i<sqrt(n);++i){
    if(n%i==0){
        v.push_back(i);
        v.push_back(n/i);
    }
}
if(i*i==n)
        v.push_back(i);
return v.size();
}
int main()
{
long long x, y;
long long xmod[5] = {0};
long long ymod[5] = {0};

cin >> x >> y;
    for (int i = 1; i <= x; ++i){
        xmod[i % 5]++;
    }

    for (int i = 1; i <= y; ++i) {
        ymod[i % 5]++;
    }

    long long ans = 0;

    ans += xmod[0] * ymod[0];
    ans += xmod[1] * ymod[4];
    ans += xmod[2] * ymod[3];
    ans += xmod[3] * ymod[2];
    ans += xmod[4] * ymod[1];

    cout<<ans;
    return 0;
}
