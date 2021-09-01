#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum_range2(int S, int E, vector<int> & cum_sum) {
  return cum_sum[E] - cum_sum[S - 1];
}

int one_based(int s, int E,vector<int> A) {
  // let A[0] = 0
  vector<int> S(A.size(), 0);

  //pre-processing: Compute cumulative sum array: Start from 1
  for (int i = 1; i < (int) A.size(); i++)
    S[i] += A[i] + S[i - 1];

  // 1-based queries

  return S[E] - S[s - 1];
}
////////////////////////////////////////////////







/*
// sum((i, j) (k, l)) where (k, l) is the bottom right
  int sum_range(int i, int j, int k, int l, vector< vector<int> > & S) {
    return S[k][l] - S[k][j-1] - S[i-1][l] + S[i-1][j-1];
  }

  void accumSum2D(vector< vector<int> > A) {
    // 1-based matrix
    // Append extra top row and col with zero


    // Accumulate each row
    for (int i = 1; i < (int) A.size(); i++)
      for (int j = 1; j < (int) A[0].size(); j++)
        A[i][j] += A[i][j-1];

    // Accumulate each col
    for (int j = 1; j < (int) A[0].size(); j++)
      for (int i = 1; i < (int) A.size(); i++)
          A[i][j] += A[i-1][j];

    // 1, 5, 2
    // 3, 2, 4
    cout << sum_range(2, 3, 3, 5, A) << "\n";
  }
  */

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,q,x,s,e;
    string str;
    cin>>str;
    cin>>q;
    vector<int>A;



    A.push_back(0);
    for(int i=0;i<str.length();i++){
        if(str[i]=='a')
            A.push_back(1);
        else
            A.push_back(0);
    }

 vector<int> S(A.size(), 0);
  //pre-processing: Compute cumulative sum array: Start from 1
  for (int i = 1; i < (int) A.size(); i++)
    S[i] += A[i] + S[i - 1];


    while(q--){
        cin>>s>>e;
        cout<<S[e] - S[s - 1]<<endl;
    }


    return 0;
}
