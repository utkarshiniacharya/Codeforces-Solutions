#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k,i;
	cin>>n>>k;
	int code[256];
	for(i=0;i<255;i+=k)
	{
		for(int j=i;j<i+k;++j)
			code[j]=i;
	}
	//	for(i=0;i<256;++i)
	//	cout<<i<<" "<<code[i]<<"\n";
	int a[n],b[n];
	for(i=0;i<n;++i)
	{
		cin>>a[i];
		b[i]=code[a[i]];
	}
	for(i=0;i<n;++i)
		cout<<b[i]<<" ";
	cout<<"\n";
	return 0;
}
