#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,num,x;
	cin>>n>>num;
	int i;
	x=num;
	int sum1=0,sum2=0;
	i=1;
	while(i<=4)
	{
		int rem=x%10;
		if(rem!=4 or rem!=7)
		{
			cout<<"NO\n";
			return 0;
		}
		x=x/10;
		if(i<=2)
			sum1+=rem;
		else
			sum2+=rem;
		++i;
	}
	if(sum1==sum2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
