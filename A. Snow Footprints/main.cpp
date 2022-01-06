#include <iostream>

using namespace std;

int main()
{
    bool all_is_L = true;
    bool all_is_R = true;

    int len ;
    cin>>len;
    string s;
    cin>>s;
    int st = 0,e = 0;
    for(int i=0;i<len;i++){
        if(s[i]=='L')
            all_is_R = false;
        else if(s[i]=='R')
            all_is_L = false;
    }


        if(all_is_R){
         for(int i = 0 ;i<len;i++){
            if(s[i]=='R'){
                st = i+1;
                for(int j = i;j<len;j++){
                    if(s[j]=='.'){
                        e = j+1;
                        cout<<st<<" "<<e;
                        return 0;
                    }
                }
            }
         }
        }else if(all_is_L){
          for(int i = 0 ;i<len;i++){
            if(s[i]=='L'){
                e = i;
                for(int j = i;j<len;j++){
                    if(s[j]=='.'){
                        st = j;
                        cout<<st<<" "<<e;
                        return 0;
                    }
                }
            }
         }
        }else{
            for(int i = 0 ;i<len;i++){
                if(s[i]=='R'){
                    st = i+1;
                    for(int j = i;j<len;j++){
                       if(s[j]=='L'){
                            e = j;
                            cout<<st<<" "<<e;
                            return 0;
                    }
                }
            }
        }
       }





    return 0;
}
