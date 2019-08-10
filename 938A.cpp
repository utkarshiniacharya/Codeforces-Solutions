#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i,j,l;
	string a;
	cin>>n>>a;
	l=a.length();
	j=0;
	for(i=0;i<l-1;++i)
	{
		if(a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' or a[i]=='y')
		{
			if(a[i+1]=='a' or a[i+1]=='e' or a[i+1]=='i' or a[i+1]=='o' or a[i+1]=='u' or a[i+1]=='y')
			{
				j=i;
				for(i=j+1;i<l-1;++i)
					a[i]=a[i+1];
				--l;
				i=j-1;
			}
		}
	/*	for(int k=0;k<l;++k)
		cout<<a[k];
		cout<<" "<<l<<"\n";*/
	}
	for(i=0;i<l;++i)
		cout<<a[i];
	cout<<"\n";
	return 0;
}
