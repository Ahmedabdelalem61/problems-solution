#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int minn = 101,maxx = 0;
    int n,x,i=1;
    int maxIndex,minIndex;
    cin>>n;
    int t = n;
    int v[t];
    while(n--){
        cin>>x;
        v[t-i]=x;
        if(x>maxx){
            maxx = x;
            maxIndex = i;
        }
        if(x<minn){
            minn = x;
            minIndex = i;
        }
        i++;
    }
   // cout<<maxIndex<<" "<<minIndex<<"\n";
   if(std::is_sorted(v,v+t))
   {
       cout<<0;
       return 0;
   }

    if(maxIndex<minIndex)
    {
        if(t>2)
           cout<<(maxIndex-1)+(t-minIndex);
        else
            cout<<0;
    }else{
        int misPlace = t-maxIndex+1;
        int first = maxIndex-minIndex;
        int sec =  maxIndex-misPlace-1;
      //  cout<<"misplace : "<<misPlace<<"\n";
        if(t>2)
           cout<<first+sec-1;
        else
            cout<<1;

    }
    return 0;
}
