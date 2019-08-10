#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k,i,j;
	cin>>n;
	k=n*2;
	int a[k];
	for(i=0;i<k;++i)
		cin>>a[i];
	sort(a,a+k);
	int d1[n],d2[n-1],x=0,y=0;
	for(i=0;i<k-1;++i)
	{
		if(i%2==0)
			d1[x++]=a[i+1]-a[i];
		else
			d2[y++]=a[i+1]-a[i];
	}
	sort(d1,d1+x);
		for(i=0;i<x;++i)
		cin>>d1[i];
	sort(d2,d2+y);
			for(i=0;i<y;++i)
		cin>>d2[i];
	int sum=0,min;
	for(i=0;i<n-1;++i)
		sum+=d1[i];
		cout<<sum<<"\n";
	min=sum;
	sum=0;
	for(i=0;i<n-1;++i)
		sum+=d2[i];
		cout<<sum<<"\n";
	if(sum<min)
		min=sum;
	cout<<sum<<"\n";		
	return 0;
}
