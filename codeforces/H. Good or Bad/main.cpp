#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        bool te = true;
        string str;
        cin>>str;
        int len = str.length();
        if(len == 1 || len ==2 )
        {
            cout<<"Bad\n";
        }else{

        for(int i = 0;i<len-2;i++){
            string test = "";
            test+=str[i];
            test+=str[i+1];
            test+=str[i+2];
           // cout<<test<<endl;
            if(test=="101"||test =="010")
                {
                    cout<<"Good\n";
                    te = false;
                    break;
                }
                else if(i == len-3&& te ){
                    cout<<"Bad\n";
                    break;
                }
        }
        }
    }
    return 0;
}
