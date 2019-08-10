#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i;
	cin>>n;
	int a[n],b[1001]={0},c[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	int k=0;
	for(i=n-1;i>=0;--i)
	{
		if(b[a[i]]==0)
		{
			c[k++]=a[i];
			b[a[i]]=1;
		}
	}
	cout<<k<<"\n";
	for(i=k-1;i>=0;--i)
		cout<<c[i]<<" ";	
	return 0;
}
