#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i;
	cin>>n;
	string s;
	cin>>s;
	int flag=0;
	if(n==1)
	{
		if(s[0]=='0')
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	else
	{
	for(i=0;i<(n-1);++i)
	{
		if(s[i]=='1' and s[i]==s[i+1])
			flag=1;
	}
	if(flag==1)
		cout<<"No";
	else
		cout<<"Yes";
	}
	return 0;
}
