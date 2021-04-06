#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<str1.length()<<" "<<str2.length()<<endl;
    cout<<str1<<str2<<endl;
    char temp1= str1[0];
    char temp2= str2[0];
    str2 [0] = temp1 ;
    str1 [0] = temp2 ;
    cout<<str1<<" "<<str2;

    return 0;
}
