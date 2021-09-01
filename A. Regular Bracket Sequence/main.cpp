#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0,sum = 0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();++i){
        if(str[i]=='(')
            c++;
        else
        {
            if(c!=0){
                c--;
                sum+=2;
            }

        }
    }
    cout<<sum;

    return 0;
}
