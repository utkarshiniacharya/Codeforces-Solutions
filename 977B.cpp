#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i,j;
	cin>>n;
	char a[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	char max1=a[0],max2=a[1];
	int count=0,max=0;
	for(i=0;i<n-1;++i)
	{
		count=0;
		char c1=a[i],c2=a[i+1];
		for(j=0;j<n-1;++j)
		{
			if(a[j]==c1 and a[j+1]==c2)
			++count;
		}
		if(count>max)
		{
			max=count;
			max1=c1;
			max2=c2;
		}
	}
	cout<<max1<<max2<<"\n";
	return 0;
}
