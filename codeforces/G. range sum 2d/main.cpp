#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
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
}*/
////////////////////////////////////////////////
// sum((i, j) (k, l)) where (k, l) is the bottom right
  long long sum_range(int i, int j, int k, int l, vector< vector<long long> > & S) {
    return S[k][l] - S[k][j-1] - S[i-1][l] + S[i-1][j-1];
  }

  vector< vector<long long> > accumSum2D(vector< vector<long long> > A) {
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

    return A;
  }

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n,m,q,x,x1,y1,x2,y2;
    cin>>n>>m>>q;
    vector< vector<long long> >A(n+1, vector <long long> (m+1));

    for(int i=0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            if(i==0||j==0)
            {
                A[i][j]=0;
                continue;
            }
            cin>>x;
            A[i][j]=x;
        }
    }
   A = accumSum2D(A);
    //show me te result

    while(q--){
        cin>>x1>>y1>>x2>>y2;
        cout<<sum_range(x1,y1,x2,y2,A)<<endl;
    }


    return 0;
}
