#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i;
	cin>>n;
	long long int a[n],max=-1000000;
	for(i=0;i<n;++i)
	{
		cin>>a[i];
		double rt=sqrt(a[i]);
		if(floor(rt)!=rt)
			if(a[i]>=max)
				max=a[i];
	}
	cout<<max<<"\n";
	return 0;
}
