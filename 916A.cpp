#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x,hh,mm;
	cin>>x;
	cin>>hh>>mm;
	if(hh%10==7 or hh%100==7 or mm%10==7 or mm%100==7)
		cout<<0<<"\n";
	else
	{
		int count=0,flag=0;
		while(flag==0)
		{
			++count;
			if(mm<x)
			{
				if(hh==0)
					hh=23;
				else
					--hh;
				mm=60+(mm-x);
			}
			else
			{
				mm=mm-x;	
			}
			if(hh%10==7 or hh%100==7 or mm%10==7 or mm%100==7)
				flag=1;	
		}
		cout<<count<<"\n";
	}
	return 0;
}
