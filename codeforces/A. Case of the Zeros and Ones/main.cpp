#include <iostream>

using namespace std;

int main()
{
    int n,cnt1 = 0,cnt0 = 0 ;
    string str;
    cin>>n>>str;
    int minimum = str.length();
    for(int i = 0;i<str.length();i+=1){
        if(str[i]=='1')
            cnt1++;
        else
            cnt0++;
    }
    if(!cnt0)
    {
        cout<<str.length();
        return 0;
    }
    minimum = min(cnt0,cnt1);
    cout<<n-(minimum*2);
    return 0;
}
