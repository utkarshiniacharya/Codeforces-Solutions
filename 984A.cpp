#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	cout<<a[(n-1)/2];
	return 0;
}
