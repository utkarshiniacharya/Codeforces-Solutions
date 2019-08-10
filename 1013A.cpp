#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int x[n],y[n],i,sumx=0,sumy=0;
	for(i=0;i<n;++i)
	{
		cin>>x[i];
		sumx+=x[i];
	}
	for(i=0;i<n;++i)
	{
		cin>>y[i];
		sumy+=y[i];
	}
	if(sumy<=sumx)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}
