#include<cmath>
#include <iostream>
#include<bits/stdc++.h>
#include<iomanip>
#include<sstream>
using namespace std;
int modular(int base, unsigned int exp, unsigned int mod)
{
    int x = 1;
    int i;
    int power = base % mod;

    for (i = 0; i < sizeof(int) * 8; i++) {
        int least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % mod;
        power = (power * power) % mod;
    }

    return x;

}
long long fac(long long n){
if(n==1)
    return 1.0;
return n*fac(n-1);
}
void printDiamond(int n)
{
    int space = n - 1;

    // run loop (parent loop)
    // till number of rows
    for (int i = 0; i < n; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0;j < space; j++)
            cout<< " ";

        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout<< "*";

        cout<< endl;
        space--;
    }

    // Repeat again in reverse order
    space = 0;

    // run loop (parent loop)
    // till number of rows
    for (int i = n; i > 0; i--)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            cout << " ";

        // Print i stars
        for (int j = 0;j < i;j++)
            cout<< "*";

        cout<< endl;
        space++;
    }
}

// Driver code
int main()
{
   string str;
   vector<int>v;
   cin>>str;
   int x;
   for(int i=0;i<str.length();i++){
    if(i%2==0){
         v.push_back(((int)str[i])-48);
         cout<<v[i]<<endl;
    }
   }
   sort(v.begin(),v.end());
   for(int i=0;i<str.length();i++){
    if(i%2!=0)
        cout<<'+';
    else
        cout<<v[i];
   }
       return 0;
}
