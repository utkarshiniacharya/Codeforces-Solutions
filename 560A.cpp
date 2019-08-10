#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	if(a[0]==1)
		cout<<"-1\n";
	else
		cout<<"1\n";
	return 0;
}
