#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k,i;
	cin>>n>>k;
	int h[n],sum[n+1]={0};
	for(i=0;i<n;++i)
	{
		cin>>h[i];
		sum[i+1]=sum[i]+h[i];
	}
	int min=sum[n],j=0;
	for(i=n;i>=k;i--)
	{
		//cout<<(sum[i]-sum[i-k])<<"\n";
		if((sum[i]-sum[i-k])<=min)
		{
			j=i-k+1;
			min=sum[i]-sum[i-k];
		}
	}
	cout<<j<<"\n";
	return 0;
}
