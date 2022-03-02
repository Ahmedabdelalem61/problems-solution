#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int maxdiv(int a, int b)
{
    while (a % b == 0)
        a = a / b;
    return a;
}
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int isUgly(int no)
{
	no = gcd(no, 2);
	no = gcd(no, 3);
	no = gcd(no, 5);

	return (no == 1) ? 1 : 0;
}
int getNthUglyNo(int n)
{

	int i = 1;
	int count = 1;
	while (n > count) {
		i++;
		if (isUgly(i))
			count++;
	}
	return i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long no ;
	cin>>no;
	cout<<(no*9)/gcd(no,9)<<"  "<<maxdiv(no,9);;
	return 0;
}
