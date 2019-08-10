#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;cin>>n;
	int a[n],i,neg[n],odd[n],x=0,y=0;long int esum=0,osum=0;
	for(i=0;i<n;++i)
	{
		cin>>a[i];
		if(a[i]<0)
			neg[x++]=a[i];
		else
		{
			if(a[i]%2==0)
				esum+=a[i];
			else
			{
				osum+=a[i];odd[y++]=a[i];
			}
		}
	}
	sort(odd,odd+y);sort(neg,neg+x);
	if(osum!=0)
	{
		if(osum%2)
			cout<<(esum+osum)<<"\n";
		else
			cout<<(esum+osum-odd[0])<<"\n";
	}
	else
	{
		cout<<osum<<" "<<esum<<"\n";
		cout<<neg[x-1];
		while(true)
		{
			--x;
			if((esum+neg[x])%2)
				break;
		}
		cout<<(esum+neg[x])<<"\n";
	}
		return 0;
}
