#include <iostream>

using namespace std;

int main()
{
    string s,news = "";
    getline(cin, s) ;
    for(int i=0;i<s.length();i++){
    if(i+4<=s.length()){
        if(s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T'){
           news+=" ";
           i+=4;
        }else
        news+=s[i];
    }else
        news+=s[i];
    }
    cout<<news;
    return 0;
}
