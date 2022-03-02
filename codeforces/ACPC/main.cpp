/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<map>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t--){
   map<int,int>mp;
   int n,x=0,a=0,b=0;
   cin>>n;
   int sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       mp[x]++;
       sum+=x;
       if(x==1)
        a+=x;
       else
        b+=x;
   }

   if(((2*a)%b==0))
    cout<<"YES";
    else
    cout<<"NO";


   }

    return 0;
}
