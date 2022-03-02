#include <iostream>

using namespace std;
int n,m,x,y;
char N[101][101];
bool test(int xx,int yy){
if(xx<=n&&xx>=1&&yy>=1&&yy<=m)
{
    if(N[xx][yy]!='x')
    {
        cout<<"no";
        return true;
    }
    return false;
}

}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=m;j++)
      {
        cin>>N[i][j];
      }
    }
    cin>>x>>y;
    if(test(x,y+1)){
     return 0;
    }

   if(test(x+1,y+1)){
    return 0;
   }

   if(test(x+1,y)){
    return 0;
   }

    if(test(x+1,y-1)){
       return 0;
    }

    if(test(x,y-1)){
    return 0;
    }

    if(test(x-1,y-1)){
       return 0;
    }

    if(test(x-1,y))
    {
        return 0;
    }
    if(test(x-1,y+1))
   {
        return 0;
   }
    cout<<"yes";
    return 0;
}
