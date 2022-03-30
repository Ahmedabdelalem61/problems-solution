#include<vector>
#include<map>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
if(n == 2){
    if(v[0]>=v[1])
    {
        cout<<0<<endl;
        return 0;
    }else{
        cout<<1<<endl;
        return 0;
    }
}
int min = 101 , max = 0 ,maxIndex, minIndex;
for(int i = 0 ; i < n ;i++){
    if(v[i]>max){
        max = v[i];
        maxIndex = i;
    }
}

for(int i = n-1 ; i >= 0 ;i--){
    if(v[i]<min){
        min = v[i];
        minIndex = i;
    }
}
//int maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
//int maxElement = *std::max_element(v.begin(), v.end());
//int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin();
//int minElement = *std::min_element(v.begin(), v.end());
//68 47 67 29 63 71 71 65 54 56
// max = 5 min = 6 
int actualminIndex = minIndex,actualMaxIndex = maxIndex;

minIndex=n-minIndex-1;
//cout<<"max element index "<<maxIndex<< " min element index : "<<minIndex<<endl;
int seconds;
if(actualminIndex<actualMaxIndex){
    seconds = minIndex+maxIndex-1;
}else{
    seconds = maxIndex+minIndex;
}
cout<<seconds<<endl;
    return 0;
}