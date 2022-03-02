#include <iostream>
#include<bits/stdc++.h>

using namespace std;
/*int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = (l+r)/ 2;

        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
*/
string func(const string input,int index){
if(index>=input.length()){
    return "";
}

return input[index] + func(input,index + 1) + input[index];
}
int main()
{
  int A[5] = {1,4,5,0,2};
  for(int i=0;i<4; i = A[i+1]-1)
    A[i] = i+A[i];
  cout<<A[0]<<A[1]<<A[2]<<A[3]<<A[4];
    return 0;
}
