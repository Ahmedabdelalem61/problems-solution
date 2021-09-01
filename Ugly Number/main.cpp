#include <bits/stdc++.h>
using namespace std;

long long int nthUglyNumber(long long int n)
{
	if (n == 1 or n == 2 or n == 3 or n == 4 or n == 5)
		return n;

	set<long long int> s;
	s.insert(1);
	n--;

	while (n) {
		set<long long int>::iterator it = s.begin();

		long long int x = *it;
		s.erase(it);

		s.insert(x * 2);
		s.insert(x * 3);
		s.insert(x * 5);
		n--;
	}
	return *s.begin();
}

int main()
{
	long long int n;
	cin>>n;
	cout << nthUglyNumber(n);
    return 0;
}

