#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long sum=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			sum+=x;
		}

	cout << (sum + n - 1) / n << endl;



	}
return 0;
}
