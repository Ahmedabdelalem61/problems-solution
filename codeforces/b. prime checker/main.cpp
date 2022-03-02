#include <iostream>
using namespace std;
int main()
{
  long long  n, i, m=0, flag=0;
  cin >> n;
  if(n==1){
    cout<<"NO";
    return 0;
  }
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"NO"<<endl;
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "YES"<<endl;
  return 0;
}
