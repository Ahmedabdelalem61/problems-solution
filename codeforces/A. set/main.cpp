#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    string str;
    set<int> s;
    vector<int>v;
    cin>>q;
    q++;
    while(q--){
        getline(cin,str);
        size_t i = 0;
        for ( ; i < str.length(); i++ ){ if ( isdigit(str[i]) ) break; }
        string num = str.substr(i, str.length() - i );
        int id = atoi(num.c_str());
        if(str[0]=='i'){
            s.insert(id);
            v.push_back(id);
        }
        else if(str[0]=='f'){
            int idx = 0;
            set<int>::iterator it = s.find(id);
	        if (it == s.end()){
                    cout<<"not found\n";
            }
            else {
		            cout<<"found\n";
	         }
        }
        else if(str[0]=='l')
        {
            set<int>::iterator it = s.lower_bound(id);
            cout<<*it<<endl;
        }
        else if(str[0]=='u')
        {
            set<int>::iterator it = s.upper_bound(id);
            cout<<*it<<endl;
        }

    }
    return 0;
}
