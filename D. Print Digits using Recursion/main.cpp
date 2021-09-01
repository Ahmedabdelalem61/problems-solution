#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    string str = "";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(i==str.length()-1)
        {
            cout<<str[i];
            continue;
        }
        cout<<str[i]<<" ";
    }
        cout<<endl;
    }

    return 0;
}
