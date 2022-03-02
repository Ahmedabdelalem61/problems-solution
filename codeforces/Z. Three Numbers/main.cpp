#include <iostream>

using namespace std;

int main()
{
    int k,s,z;
    cin>>k>>s;
    int c=0;
    for(int i =0 ;i<=k;i++){
        for(int j =0 ;j<=k ;j++){
            z=s-(i+j);
			if(i+j+z==s && z>=0 && z<=k)
			{
				c++;
			}
        }
    }

    cout<<c;
    return 0;
}
