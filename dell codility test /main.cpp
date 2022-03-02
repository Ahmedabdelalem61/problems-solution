#include <bits/stdc++.h>
using namespace std;
int minSteps(string s, string t) {
    if(s.length() != t.length())
    return -1;
    //to deal with distinct strings in this problem
    map <int , int> f;
    int ans = 0;
    for(char &c : s) {
        f[c - 'a']++; //f[1] 1
    }
    for(char &c : t) {
        f[c - 'a']--; //f[1] 0
    }
    //lll kll 
    for(auto &c : f) {
        if(c.second != 0)
            ans += abs(c.second);   
            //cout<<"\nans : "<<ans<<endl;                                
    }
    return ans/2;
}
vector<int> listt(vector<string> a , vector<string> b ){
    vector<int> all_result;
    for(int i=0 ;i<a.size();i++){
        int res = minSteps(a[i] , b[i]);
        all_result.push_back(res);
    }
    return all_result;
}
int main() {
    vector<string> v1;
    vector<string> v2;
    v1.push_back("ahmed");
    v1.push_back("llk");
    v1.push_back("mona");
    v2.push_back("hmeda");
    v2.push_back("tml");
    v2.push_back("moan");
    vector<int> result = listt(v1,v2);
    for(auto &i : result )
    cout<<i<<" ";
    return 0;
}