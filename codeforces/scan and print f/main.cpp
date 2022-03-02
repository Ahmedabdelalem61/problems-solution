#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char a[10];
    int t;
    cin>>t;
	cin.ignore();
	scanf("%[^\n]%*c", a); // with spaces  cin.igonre()
	cout << a << endl;
	string a1 = a;
	string ans1 = "asd";
	printf("%s\n", ans1.c_str(a));
    return 0;
}
