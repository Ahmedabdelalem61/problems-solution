#include <iostream>

using namespace std;

int main()
{
    string str;
    int sum=0;
    cin>>str;
    for(int i=0;i<str.length();i++)sum+=str[i]-'0';
    cout<<sum;
    return 0;
}
