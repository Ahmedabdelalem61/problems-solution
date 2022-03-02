#include <iostream>
#include  <bits/stdc++.h>
using namespace std;

int main()
{
    string str,str1="";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==92)
        break;
        str1+=str[i];
    }
    cout<<str1;
    return 0;
}
