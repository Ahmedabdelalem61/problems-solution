#include<bits/stdc++.h>
using namespace std;
int n;
struct node
{
	int l,r;
};
node a[300001];
int ll[300001],rr[300001];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ll[i]>>rr[i];
		a[i].l=ll[i],a[i].r=rr[i];
	}
	sort(ll+1,ll+1+n);
	sort(rr+1,rr+1+n);
	int len=0;
	for(int i=1;i<=n;i++)
	{
	    int testL = n,testR = 1;
		int l=ll[n],r=rr[1];
		while(a[i].l==l)
        {
            testL--;
            l = ll[testL];
        }
		while(a[i].r==r)
        {
            testR++;
            r = rr[testR];
        }
		len=max(len,r-l);
	}
	cout<<len;
}
