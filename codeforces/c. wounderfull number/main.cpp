#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> palindCheck;
    int n;
    cin>>n;
    if(n%2==1){
        int binaryNum[32];

    // counter for binary array
       int i = 0;
       while (n > 0) {

            // storing remainder in binary array
           binaryNum[i] = n % 2;
           n = n / 2;
          // cout<<"old binary "<<binaryNum[i]<<" new n = "<<n<<endl;
           v.push_back(binaryNum[i]);
           palindCheck.push_back(binaryNum[i]);
           i++;
       }
       reverse(v.begin(),v.end());
       for(int j=0;j<v.size();j++)
       {
           if(v[j]!=palindCheck[j])
           {
               cout<<"NO";
               return 0;
           }
       }
       cout<<"YES";

       }else
        {
        cout<<"NO";
        }

    return 0;
}
