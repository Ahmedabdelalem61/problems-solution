#include <iostream>
using namespace std;

int len(int n){
if (n==1)
return 1;
else if(n%2==0)
return 1+len(n/2);
else
return 1+len(3*n+1);
}
///////////////////////

int power(int p,int exp){
if(exp==0)
   return 1;
  return p*power(p,exp-1);
}

int arr_max(int arr[],int index){
    if(index==0)
    return arr[0];
    return max(arr[index-1],arr_max(arr,index-1));
}

int left_max_arr(int arr[],int index,int pos = -1){
    if(index==pos)
    return arr[pos];
    return max(arr[pos+1],left_max_arr(arr,index,pos+1));
}

int arr_sum(int arr[],int len){
if(len == 1)
return arr[0];
return arr[len-1]+arr_sum(arr,len-1);
}


int left_sum_arr(int arr[],int len,int pos = 0 ){
if(len == pos+1)
return arr[pos];
return arr[pos]+left_sum_arr(arr,len,pos+1);
}

double avg_sum(int arr[],int len){
if(len == 1)
return arr[0];
return (arr[len-1]+arr_sum(arr,len-1))/(double)len;
}

int arr_increment_ByIndex(int arr[],int len){
if(len == 1){
  cout<<"index: "<<len-1<<" arr : "<<arr[len-1]<<endl;
  return arr[0]+=len-1;
}
arr[len-1]+=len-1;
cout<<"index: "<<len-1<<" arr : "<<arr[len-1]<<endl;
return arr_increment_ByIndex(arr,len-1);
}

int accumulative_array(int arr[],int len){
if(len-1==0){
  cout<<"index : "<<len-1<<" acc :"<<arr[0]<<endl;
  return arr[0];
}

int acc = arr[len-1]+=accumulative_array(arr,len-1);
cout<<"index : "<<len-1<<" acc :"<<acc<<endl;
return acc;
}

bool is_palindrome(string s,int len,int pos){
    if(pos==(len/2)-1){
        if(s[pos]==s[((len/2)-1)-pos]){
           return true;
        }
       return false;
    }else{
        if(s[pos]==s[((len/2)-1)-pos]){
            is_palindrome(s,len,pos+1);
        }
        return false;
    }
}
bool isprefix_substring(string main,string substring,int srt = 0 ){

    if(srt == substring.length())
        return true;
    if(main[srt]!=substring[srt])
        return false;
    return isprefix_substring(main,substring,srt+1);
}

void do_something(int n){
    if(n){
        do_something(n/10);
        cout<<n%10;

    }
}
bool isprime( int m, int current = 3 ){
    if(m==2)
        return true;
    if(m<=1 || m%2==0)
        return false;

    if(m==current)
        return true;

    if(m%current==0)
        return false;

    return isprime(m,current+1);
}
int count_primes(int st,int en){
    if(st>en)
    return 0;
    int result = count_primes(st+1,en);
    if(isprime(st))
        result+=1;
    return result;
}

int main()
{
    string s = "abccba";
    //cout<<isprefix_substring(s,"ab",0);
   // cout<<is_palindrome(s,6,1);
   // cout<<len(3);
   // 16 8 4 2 1
   //cout<<power(3,3);
   cout<<count_primes(10,20);
   int arr[5];
   arr[0] = 1;
   arr[1] = 3;
   arr[2] = 4;
   arr[3] = 6;
   arr[4] = 7;
   //do_something(123456);
   //cout<<left_sum_arr(arr,4,0);
   //cout<<arr_sum(arr,2);
   //cout<<left_max_arr(arr,6,-1);
   //cout<<arr_max(arr,5);
   //cout<<accumulative_array(arr,6);
    return 0;
}
