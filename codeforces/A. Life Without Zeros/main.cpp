#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //freopen("a.txt","r",stdin);
    vector<int>c1;
    vector<int>c2;
    string a ,b,c;
    cin>>a>>b;
    int intA =stoi(a);
    int intB =stoi(b);
    int FirstC = intA+intB;

    a.erase(remove(a.begin(), a.end(), '0'), a.end());
    b.erase(remove(b.begin(), b.end(), '0'), b.end());

    intA = stoi(a);
    intB = stoi(b);
    int secondC = intA+intB;
    // cout<<FirstC<<" "<<secondC;
    while(FirstC){
        c1.push_back(FirstC%10);
        FirstC/=10;
    }
    int forloop = 0;
    while(secondC){
        forloop++;
        c2.push_back(secondC%10);
        secondC/=10;
    }
    c1.erase(remove(c1.begin(), c1.end(), 0), c1.end());
    sort(c1.begin(),c1.end());
    sort(c2.begin(),c2.end());
    for(int i=0;i<forloop;i++){
        if(c1[i]!=c2[i])
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
