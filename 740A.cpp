#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long int n,a,b,c;
	cin>>n>>a>>b>>c;
	int k=4-(n%4);
	if(k==4)
		cout<<"0\n";
	else if(k==1)
	{
		cout<<a<<"\n";
	}
	else if(k==2)
	{
		if((b/2)<a and b<(c*2))
			cout<<b<<"\n";
		else if((long)(a*2)<(long)(c*2))
			cout<<(long)(a*2)<<"\n";
		else
			cout<<(long)(c*2)<<"\n";
	}
	else if(k==3)
	{
		if((c/3)<a and c<(a+b))
			cout<<c<<"\n";
		else if((long)(a*3)<(long)(a+b))
			cout<<(long)(a*3)<<"\n";
		else
			cout<<(long)(a+b)<<"\n";
	}
	return 0;
}
