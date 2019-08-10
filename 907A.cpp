#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int v1,v2,v3,vm;
	cin>>v1>>v2>>v3>>vm;
	if(2*v3>=vm)
		cout<<v1<<"\n"<<v2<<"\n"<<v3<<"\n";
	else
		cout<<"-1\n";
	return 0;
}
