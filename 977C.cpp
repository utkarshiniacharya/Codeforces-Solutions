#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a[n],i;
	for(i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	int num=-1,flag=0;
	i=0;
	for(i=0;i<n-1;++i)
		{
			num=a[i];
			--k;
		//	cout<<num<<" "<<k<<"\n";
			if(k==0 and a[i]==a[i+1])
			{
				flag=1;
				break;
			}
			if(k==0)
				break;		
		}

	if(flag==1)
		cout<<"-1\n";
	else
		cout<<num<<"\n";
	return 0;
}
