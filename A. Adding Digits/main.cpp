#include <iostream>
#include<sstream>
#include<string>
using namespace std;

long long ToInt(string str) {
	/*istringstream iss(str);
	long long num;
	iss >> num;

	return num;
	*/
	unsigned long long num = std::stoull(str);

	return num;
}

int main()
{
    long long b,n;
    string a = "";
    cin>>a>>b>>n;
    bool flag  = false;
    for(int i=0;i<10;i++){
        a+='0'+i;
        //  cout<<endl<<" the number a string  "<<a<<"this is a int : "<<ToInt(a)<<" devisible by: "<<endl;
        if(ToInt(a) % b == 0){
            flag  = true;
            break;
        }
        else{
            a.pop_back();
        }
    }

    if(flag){
        cout<<ToInt(a);
        for(int i=0;i<n-1;i++)cout<<0;
    }else{
        cout<<-1;
    }

    return 0;
}
