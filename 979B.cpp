#include<bits/stdc++.h>
using namespace std;
int maxocc(string str,int nn)
{
	int a[52]={0},i;
	int max=a[0];
	for(i=0;i<nn;++i)
	{
		if(str[i]>=65 and str[i]<=90)
		{
			++a[str[i]-65+26];
			if(max<a[str[i]-65+26])
				max=a[str[i]-65+26];
		}
	    else
		{
			++a[str[i]-97];
			if(max<a[str[i]-97])
				max=a[str[i]-97];
		}
	}
	return max;	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	string str1,str2,str3;
	cin>>n>>str1>>str2>>str3;
	int l=str1.length();
	if(n>=l)
		cout<<"Draw\n";
	else
	{
		int c1=n-maxocc(str1,l);
		int c2=n-maxocc(str2,l);
		int c3=n-maxocc(str3,l);
		//cout<<c1<<" "<<c2<<" "<<c3<<"\n";
		int m=c1<c2?(c1<c3?c1:c3):(c2<c3?c2:c3);
			if(m==c1 and m!=c2 and m!=c3)
				cout<<"Kuro\n";
			else if(m==c2 and m!=c1 and m!=c3)
				cout<<"Shiro\n";
			else if(m==c3 and m!=c2 and m!=c1)
				cout<<"Katie\n";
			else
				cout<<"Draw\n";				
	}
	
	return 0;
}
