#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i;
	string str;
	cin>>n>>str;
	int flag=0;
	int k=n;
	while(flag==0)
	{
		int x=0;
		for(i=0;i<n-3;++i)
		{
			if(str[i]=='x' and str[i+1]=='x' and str[i+2]=='x')
			{
				for(int j=i+2;j<n-1;++j)
					str[j]=str[j+1];
				--n;
		    }
			else
				++x;
			if(x==n)
     		{
			flag=1;
			break;
		    }
		}
	}
	cout<<k-n<<"\n";
	return 0;
}
