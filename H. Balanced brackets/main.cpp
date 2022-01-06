#include <iostream>
#include<stack>
#include<map>
using namespace std;
bool isValid(string s){
    map<char,char> mp;
    mp[')'] = '(';

    stack<char> myParenthesis;
    for(auto ch : s){
        if(mp.count(ch)){
            if(myParenthesis.empty())
                return false;
            char open_dependon_close = mp[ch];
            char currentOpen = myParenthesis.top();
            if(open_dependon_close != currentOpen){
                return false;
            }
            myParenthesis.pop();
        }else{
            myParenthesis.push(ch);
        }
    }
    return myParenthesis.empty();
}

int main()
{
    string s;
    cin>>s;

    if(isValid(s))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
