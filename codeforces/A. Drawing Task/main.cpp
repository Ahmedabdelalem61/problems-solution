#include <iostream>

using namespace std;

int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    char arr[n+1][m+1];
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
            arr[i][j]= '.';
    int r1,c1,r2,c2;
    char ch;
    while(q--){
      cin>>r1>>c1>>r2>>c2>>ch;
      int tempC2,tempR2;
      if(r1>r2){
        tempR2 = r2;
        r2 = r1 ;
        r1 = tempR2;
      }
      if(c1>c2){
        tempC2 = c2;
        c2 = c1 ;
        c1 = tempC2;
      }
      for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
           arr[i][j] = ch;
        }
      }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }




    return 0;
}
