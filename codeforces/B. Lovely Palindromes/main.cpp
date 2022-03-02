#include<iostream>
#include<string>
 using namespace std;
 void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    swap(str[i], str[n - i - 1]);
}
 int main(){
     string n;
     cin>>n;
     string temp = n;
     reverseStr(n);
     temp+=n;
     cout<<temp;
     return 0;
 }