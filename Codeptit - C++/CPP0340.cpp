#include<stdio.h>
typedef long long ll;
long long f[500][500] ;
void solve()
{
	int m,n;
	scanf("%d %d",&m,&n);
	char s[m+5];
	scanf("%s",s);
	int a[m+1] ;
	int i,j,k;
	for(i = 1 ; i <= m ; i++ )
	{
		a[i] = (int)(s[i-1]-'0');	
	}
	for(i = 0 ; i <= m ;i++ )
		for(j = 0 ; j <= n ; j++ )
		 f[i][j] = 0;
	for(i = 1 ; i <= m ; i++ )
	{
		f[i][a[i]%n] = 1;
		for(j = 1 ; j < i ; j++ )
		{
			for(k = 0 ; k <= n ; k++ )
			{
				ll ts = f[j][k] ;
				ll data = (k*10+a[i])%n;
				if( ts != 0 )
					f[i][data] += ts;
			}
		}
	}
	ll dem = 0;
	for(i = 1 ; i <= m ; i++ )
	{
		dem += f[i][0] ;	
	}	
	printf("%lld\n",dem);
}

int main()
{	
	int tt;
	scanf("%d",&tt);
	while( tt-- )
	{
		solve();
	}
}

