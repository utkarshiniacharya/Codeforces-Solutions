#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i;
	cin>>n;
	int x[n],count=0;
	for(i=0;i<n;++i)
		cin>>x[i];
	for(i=0;i<n;++i)
		if(x[i]==1)
			break;
	int flag=0;
	for(;i<n;i++)
	{
		if(x[i]==1)
		{
			++count;
			flag=1;
		}
	    else if(x[i]==0)
	    {
	    	if(flag!=0)
	    	{
	    	if(i+1<n)
	    	{
	    		if(x[i+1]!=0)
	   				++count;
	   			else
	   			{
	   				++i;
	   				flag=0;
				}
	    	}
	        }
		}
	}
	cout<<count<<"\n";
	return 0;
}
