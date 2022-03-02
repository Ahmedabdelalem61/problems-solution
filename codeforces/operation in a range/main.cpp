#include <iostream>

using namespace std;

int main()
{
    long long l,r;
    cin>>l>>r;
    if(l>r){
        long long temp = r;
        r=l;
        l = temp;
    }


    //sum generally
    long long sum = (r*(r+1)/2)-(((l*l)-l)/2);
    long long sumOfOdds = ((((r+1)/2)*((r+1)/2))-((l/2)*(l/2)));
    long long step1 = ((r/2)*(r/2))+r/2;
    long long step2 = ((l-1)/2)*(((l-1)/2)*((((l-1)/2)))+1);
    cout<<sum<<endl;
    //sum of evens
    cout<<sum-sumOfOdds<<endl;
    //sum of odds
    cout<<sumOfOdds;
    return 0;
}
