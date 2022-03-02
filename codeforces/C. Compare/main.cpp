#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<=str1.length();i++){
    str1 [i] = (char) tolower(str1[i]);
    }
    for(int i=0;i<=str2.length();i++){
      str2 [i] = (char) tolower(str2[i]);
    }

    if(str1==str2)
    {
        cout<<str1;
        return 0;
    }

    int len = str1.length();
    if(len<=str2.length())
    {

    }
    else
    len = str2.length();
    for(int i=0;i<len;i++)
    {
        if(str1[i]<str2[i]){
            cout<<str1;
            return 0;
        }

        else if(str1[i]>str2[i]){
            cout<<str2;
            return 0;
        }

    }

    str1.length()>str2.length()?cout<<str2:cout<<str1;
    return 0;
}
