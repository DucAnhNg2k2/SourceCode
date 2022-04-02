// code C
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) strlen(x)
void solve()
{	
	ll dd[1000] = {0};
	int n;
	scanf("%d",&n);
	ll s = 1 ;
	for(int i = 2 ; i <= n ; i++ )
	{
		int tmp = i ;
		for(int j = 2 ; j <= sqrt(tmp) ; j++ )
		{
			if( tmp%j == 0 )
			{
				int dem = 0 ;
				while( tmp%j == 0 )
				{
					tmp/=j;
					dem++;
				}
				if( dd[j] < dem ) dd[j] = dem ;
			}
		}
		if( tmp > 1 ) if( dd[tmp] < 1 ) dd[tmp] = 1;
	}
	FOR(0,1000)
	{
		if( dd[i] != 0 ) s = s*pow(i,dd[i])*1.0;
	}
	printf("%lld\n",s);
}
int main()
{	
	int t;
	scanf("%d",&t);
	while( t-- )
	{
		solve();
	}
} 
