#include<iostream>
using namespace std;
bool islastChance(int arr[],int n,int i){
	for(int j = i ;j< n ;j++){
		if(arr[j]==0)
			return false;}
	return true;
}
int main(){
    int t,n,c = 0;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int loacation[n];
        for(int i = 0; i < n ; i++ )cin>>loacation[i];
        for(int i= 0 ;i< n;){
            if(!loacation[i]){
                while (loacation[i] == 0)
                {
                    c++;
                    i++;
                }
                bool islast = islastChance(loacation,n,i);
                if(islast){
                	c++;
                	break;
                }
                while (loacation[i] == 1)
                {
                    if(i == n)
                    break;
                    c++;
                    i++;
                }
            }else{
            	i++;
            }
        }
        cout<<c<<endl;
        c = 0;
    }
    return 0;
}
