#include <iostream>

using namespace std;

int main()
{
    int r,c,x;
    cin>>r>>c;
    int sum[r][c] = {0};
    for(int i =0;i<r;i++)
        for(int j = 0;j<c;j++)
            sum[i][j]=0;
    for(int i =0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>x;
            sum[i][j]+=x;
        }
    }
    for(int i =0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>x;
            sum[i][j]+=x;
        }
    }
    for(int i =0;i<r;i++)
        {
            for(int j = 0;j<c;j++)
            {
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}
