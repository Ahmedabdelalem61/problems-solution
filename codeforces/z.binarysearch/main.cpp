#include<iostream>
#include<algorithm>
using namespace std ;
int main (){
    int x,y,b;
    cin>>x>>y;
    int m;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];

    }
    sort(a,a+x);
    for (int i=0;i<y;i++){
        int c=0,l=0,h=x-1;
        cin >>b;
    while (l<=h){
        m=(l+h)/2;
        if (a[m]==b)
        {
            c=1;
            break;
        }
        else if(a[m]>b)
            h=m-1;
        else
            l=m+1;

    }
     if (c==1)
        cout <<"found"<<endl;
    else
        cout <<"not found"<<endl;
    }
return 0;}
