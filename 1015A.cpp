#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m,i;
	cin>>n>>m;
	int a[m+1]={0},l,r;
	for(i=1;i<=n;++i)
	{
		cin>>l>>r;
		for(int j=l;j<=r;++j)
			++a[j];
	}
	int count=0;
	for(i=1;i<=m;++i)
		if(a[i]==0)
			++count;
	if(count==0)
		cout<<0<<"\n";
	else
	{
		cout<<count<<"\n";
		for(i=1;i<=m;++i)
		{
			if(a[i]==0)
				cout<<i<<" ";	
		}
		cout<<"\n";
	}
	
	return 0;
}
