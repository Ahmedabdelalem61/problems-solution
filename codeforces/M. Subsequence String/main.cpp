#include <bits/stdc++.h>
using namespace std;
vector<string> all;

void printSubsequence(string input, string output)
{
	// Base Case
	// if the input is empty print the output string
	if (input.empty()) {
		//cout << output << endl;
		all.push_back(output);
		return;
	}

	// output is passed with including
	// the Ist character of
	// Input string
	printSubsequence(input.substr(1), output + input[0]);

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output);
}

// Driver code
int main()
{
	string output = "hello";
	string input = "";
	cin>>input;
/*
	printSubsequence(input, output);
    vector<string>::iterator it;
    for(it = all.begin();it!=all.end();it++){
      if(*it=="hello"){
         cout<<"YES";
         return 0;
      }
    }

    cout<<"NO";*/

    int c = 0;
    for(int i= 0 ;i< input.length();i++){
        if(input[i]=='h'){
            for(int j = i+1 ;j< input.length();j++){
              if(input[j]=='e'){
                for(int f= j+1;f<input.length();f++){
                    if(input[f]=='l'){
                        for(int c= f+1;c<input.length();c++){
                            if(input[c]=='l'){
                                for(int t = c+1;t<input.length();t++){
                                    if(input[t]=='o')
                                    {
                                        cout<<"YES";
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
             }
           }

        }
    }

    cout<<"NO";

	return 0;
}
