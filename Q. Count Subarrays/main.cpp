#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--){
    int c=0;
    int arr[100];
	int n,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int start = 0; start < n; start++) {
		for (int last = start; last < n; last++) {
            vector<int> v;
			for (int k = start; k <= last; k++)
				v.push_back(arr[k]);
		  if(is_sorted(v.begin(),v.end()))c++;
		}
	}
        cout<<c<<endl;
    }


    return 0;
}
