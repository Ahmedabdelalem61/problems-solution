#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int matrix [n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int R1 = x-1,R2 = y-1;
    for(int i = 0; i<n ;i++){
        int temp = matrix[R1][i];
        matrix [R1][i] = matrix [R2][i];
        matrix [R2][i] = temp;
    }
    for(int i = 0; i<n ;i++){
        int temp = matrix[i][R1];
        matrix [i][R1] = matrix [i][R2];
        matrix [i][R2] = temp;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
