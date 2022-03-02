#include <iostream>

using namespace std;

int main()
{
    string s="// I am a single comment and you must remove me :((\n/*\nI am a block comment and you must remove me\n*/\n\n#include<iostream>\nusing namespace std;\n\nint main() {\n\nint a, b;\ncin » a » b; // Reading two variables from user (please remove me!! :( )\ncout « a + b « endl;\n\n// End of the program (remove me please :))\nreturn 0;\n\n}";

    string s2 ;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==47&&s[i+1]==47)
        {
            for(int j=i+2;j<s.length()-1;j++){
                if(s[j]==92 && s[j+1]==110)
                    {
                        break;
                    }
                    i++;
            }

        }else
       s2+=s[i];
    }

    cout<<s<<"\n"<<s2;
    long long ll = 10000000*1010000;
    cout<<ll;

    return 0;
}
