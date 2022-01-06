#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{// memory limit on test 3
    set<char>st;
    int unneded ;
    cin>>unneded;
    string str;
    cin>>str;
    /*
    map<char,int> mp;
    for(int i=0;i<str.length();i++){
     st.insert(str[i]);
     mp[str[i]]++;
    }

    string newstr = "";
    set<char>::iterator itr;
    for (itr = st.begin(); itr != st.end(); itr++) {
           int c = mp[(*itr)];
         while(c--){
                newstr += *itr;
         }
    }

    cout<<newstr;
*/
    sort(str.begin(),str.end());
    cout<<str;


    return 0;
}
