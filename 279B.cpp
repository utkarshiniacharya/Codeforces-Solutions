#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int i,j,n,t;
	cin>>n>>t;
	long int a[n];
	long int sum=0;j=0;
	int max=0,count=0;
	//cout<<"max\tcount\tsum\tj\n";
	for(i=0;i<n;++i)
	{
		cin>>a[i];
        sum+=a[i];
		++count;
		if(sum>t)
		{
			--count;
			if(count>=max)
				max=count;
			sum-=a[j++];
		}
		if(sum==t)
		{
			if(count>=max)
				max=count--;
			sum-=a[j++];
		}
		//cout<<max<<"\t"<<count<<"\t"<<sum<<"\t"<<j<<"\n";	
	}
	if(max>count)
		cout<<max<<"\n";
	else
		cout<<count<<"\n";
	return 0;
}
