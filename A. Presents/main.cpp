#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int fir[n],sec[n];
    for(int i=0;i<n;i++){
        cin>>fir[i];
        sec[fir[i]-1] = i;
    }
//   2 3 4 1
//   4 1 2 3
    for(int i=0;i<n;i++)
    cout<<sec[i]+1<<" ";
    return 0;
}
