#include <iostream>
using namespace std;
int main()
{  int t;
cin>>t;
while(t--){
     int n, i, m=0, flag=0;
  cin >> n;
if(n==1)
{
    cout<<"NO\n";
    continue;
}
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
        cout<<"YES\n";
  else
    cout<<"NO\n";
    flag = 0;
}

  return 0;
}
