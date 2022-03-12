#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t = 1;
	while( t-- )
	{
		long long n;
		cin >> n;
		double s = 0 ;
		for(int i = 1 ; i <= n ; i++ )
		{
			s += (double)(1*1.0/i);
		} 
		printf("%.4lf\n",s);
	}
}
