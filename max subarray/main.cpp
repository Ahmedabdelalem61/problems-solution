#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--){
    int arr[100];
	int n,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int start = 0; start < n; start++) {
		for (int last = start; last < n; last++) {
            vector<int> v;
            int o=0;
			for (int k = start; k <= last; k++){
				v.push_back(arr[k]);
		        o++;
		  }
		  x = *max_element(v.begin(),v.end());
          cout<<x<<" ";
		}
	}
        cout<<endl;
    }


    return 0;
}
