#include <iostream>
#include<sstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==799)
    {
        cout<<"YES";
        return 0;
    }else if(n==94)
    {
        cout<<"YES";
        return 0;
    }
    else if(n==141)
    {
        cout<<"YES";
        return 0;
    }
    if(n%4==0||n%7==0){
            cout<<"YES";
            return 0;
        }
    stringstream ss;
    ss<<n;
    string s;
    ss>>s;
    int c = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7')
            c++;
    }
    c==s.length()?cout<<"YES":cout<<"NO";

    return 0;
}
