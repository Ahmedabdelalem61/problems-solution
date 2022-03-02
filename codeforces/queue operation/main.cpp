#include <iostream>
#include<queue>
#include <sstream>
#include<string>
using namespace std;

int main()
{
    queue<int>q;
    string str,s="";
    int queries;
    cin>>queries;
    while(queries--){
      getline(cin,str);
      if(!str.find("push ")!=string::npos){
          cout<<"opened the condition\n";
        for(int i =4;i<str.length();i++){
            s=s+str[i];
            cout<<"ddd";
        }
        cout<<s;
        int x = stoi(s);
        q.push(x);
        cout<<x;
        s = "";
      }

      while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
      }

    }


    return 0;
}
