#include <iostream>
using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
        isPrime(n)?cout<<"YES\n":cout<<"YES\n";
    }

    return 0;
}
