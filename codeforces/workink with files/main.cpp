#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("my_file");

    if(fin.fail()){
        cout<<"ERROR"<<endl;
        return 0;
    }

    int x,y;
    fin>>x>>y;

    fin.close();

    ofstream fout("my_file_output");

    if(fout.fail()){
        cout<<"ERROR"<<endl;
        return 0;
    }

    fout<<x+y;
    fout.close();
    // to check it in console
    cout<<x+y;

    return 0;
}
