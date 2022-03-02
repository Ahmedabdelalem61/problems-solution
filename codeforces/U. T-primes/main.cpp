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
    long long a[1000001]={0};
    for (long long x = 2; x <= 1000000; x++) {
    if (a[x]) continue;
    for (long long u = 2*x; u <= 1000000; u += x) {
        a[u] = x;
      }
    }
    int n;
	long long x, y;

	cin >> n;

	for(int i=0; i<n; i++)
	{
		cin >> x;
		if(x==1){
		   cout << "NO\n";
		   continue;
		}

		y=(long long)floor(sqrt(x)+0.001);

		if(y*y==x)
		{
			if(a[y])
			{
				cout << "NO\n";

			}
			else
			{
				cout << "YES\n";
			}
		}
		else
		{
			cout << "NO\n";
		}
	}

    return 0;
}
