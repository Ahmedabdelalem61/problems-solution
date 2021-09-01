#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
     string str1,str2,str3;
    cin>>str1>>str2;
    int len = str1.length();
    str1.length()>str2.length()?len = str2.length() :  len = str1.length();
    for(int i=0;i<len ;i++){
        str3+=str1[i];
        str3+=str2[i];
    }
    if(str1.length()>str2.length())
        for(int i = str2.length() ;i<str1.length();i++)
        str3+=str1[i];
    else if(str2.length()>str1.length())
        for(int i = str1.length() ;i<str2.length();i++)
        str3+=str2[i];
    cout<<str3<<endl;
    }

    return 0;
}
