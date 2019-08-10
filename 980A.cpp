#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	int link=0,pearl=0,i;
	cin>>s;
	int l=s.length();
	for(i=0;i<l;++i)
	{
		if(s[i]=='-')
			++link;
		if(s[i]=='o')
			++pearl;
	}
	if(pearl==0)
		cout<<"YES\n";
	else
	{
	if(link%pearl==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	}
	return 0;
}
