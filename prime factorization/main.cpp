#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
ll primes[1000001];
vi primeFactors(ll N) { // remember: vi is vector<int>, ll is long long
vi factors;
ll PF_idx = 0, PF = primes[PF_idx]; // primes has been populated by sieve
while (PF * PF <= N) { // stop at sqrt(N); N can get smaller
while (N % PF == 0) { N /= PF; factors.push_back(PF); } // remove PF
PF = primes[++PF_idx]; // only consider primes!
}
if (N != 1) factors.push_back(N); // special case if N is a prime
return factors; // if N does not fit in 32-bit integer and is a prime
}
int main()
{
    ll N;
    cin>>N;
    for (int x = 2; x <= N; x++) {
if (primes[x]) continue;
for (int u = 2*x; u <= N; u += x) {
primes[u] = x;
}
}
vi r = primeFactors(N); // slowest, 2147483647 is a prime
for (vi::iterator i = r.begin(); i != r.end(); i++) printf("> %d\n", *i);
    return 0;
}
