#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"will not take number";
                return 0;
            }
        }
    }
    cout<<"will take number";

    return 0;
}
