#include<stdio.h>
const long long mod = 1e9+7;
long long Power(int n,long long k)
{
	if( k == 0 ) return 1;
	if( k == 1 ) return n%mod;
	else
	{
		long long temp = Power(n,k/2)%mod;
		if( k%2 == 0 ) return (temp*temp)%mod;
		else return ((temp*temp)%mod*(n)%mod)%mod;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while( t-- )
	{
		int n ; long long k;
		scanf("%d %lld",&n,&k);
		printf("%lld\n",Power(n,k));
	}
}
