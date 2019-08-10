#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int f[m],i;
	for(i=0;i<m;++i)
		cin>>f[i];
	sort(f,f+m);
	/*for(i=0;i<m;++i)
		cout<<f[i]<<" ";
	cout<<"\n";*/
	int min=f[n-1]-f[0];
	for(i=0;i<=(m-n);++i)
	{
		//cout<<f[i+n-1]<<" "<<f[i]<<"\n";
		if((f[i+n-1]-f[i])<=min)
			min=f[i+n-1]-f[i];	
	}
	cout<<min<<"\n";
	return 0;
}
