// C++ program to find sum of all divisors of
// a natural number
#include<bits/stdc++.h>
#define ll long long
using namespace std;

// Function to calculate sum of all proper divisors
// num --> given natural number
int divSum(int num)
{
    // Final result of summation of divisors
    int result = 0;
    if(num == 1) // there will be no proper divisor
      return result;
    // find all divisors which divides 'num'
    for (int i=2; i<=sqrt(num); i++)
    {
        // if 'i' is divisor of 'num'
        if (num%i==0)
        {
            // if both divisors are same then add
            // it only once else add both
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }

    // Add 1 to the result as 1 is also a divisor
    return (result + 1);
}

// Driver program to run the case
ll generate_divisors(ll n){
ll sum = 0;
ll i;
vector<ll> v;
for(i = 1;i*i<n;i++)
    if(n%i==0){
      v.push_back(i);
      v.push_back(n/i);
    cout<<i<<" "<<n/i<<" ";
    sum+=i;
    sum+=n/i;
    }

if(i*i==n){
    v.push_back(i);
    cout<<" "<<i<<" ";
    sum+=i;
}
return sum;

}
int main()
{
    int n;
    cin>>n;
    cout<<generate_divisors(n);
    return 0;
}
