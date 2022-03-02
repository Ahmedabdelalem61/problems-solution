#include <iostream>

using namespace std;

int main()
{
    int score = 0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='V')
            score+=5;
        else if(s[i]=='W')
            score+=2;
        else if(s[i]=='')
    }
    return 0;
}
