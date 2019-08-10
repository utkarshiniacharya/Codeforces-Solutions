#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,p,q,count=0;
	for(cin>>n;n--;)
	{
		cin>>p>>q;
		if((q-p)>=2)
			++count;
	}
	cout<<count<<"\n";
	return 0;
}
