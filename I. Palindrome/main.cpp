#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[str.length()-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
