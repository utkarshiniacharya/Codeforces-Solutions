#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n;
	for(cin>>t;t--;)
	{
		cin>>n;
		int flag=0,i;
		for(i=0;i<=n;i+=7)
		{
			if(((n-i)%3)==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
