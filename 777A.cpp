#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long int n;int x;
	cin>>n>>x;
	int max[6][3]={{0,1,2},
	               {1,0,2},
				   {1,2,0},
				   {2,1,0},
				   {2,0,1},
				   {0,2,1}};
	int mod=n%6;
	cout<<max[mod][x];
	return 0;
}
