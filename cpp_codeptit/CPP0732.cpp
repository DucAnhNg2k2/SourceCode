#include<stdio.h>

void solve()
{
	int n;
	scanf("%d",&n);
	long long a[n+5], f[n+5] = {0};
	for(int i = 1 ; i <= n ; i++ ) scanf("%lld",&a[i]);
	f[1] = a[1] ;
	for(int i = 2 ; i <= n ; i++ )
	{
		for(int j = 0 ; j < i ; j++ )
		{
			if( a[j] < a[i] ) 
			{
				if( f[i] < a[i] + f[j] ) f[i] = a[i] + f[j] ;
			}
		}
	}
	long long max = -1e18 ;
	for(int i = 1 ; i <= n ; i++ )
	{
		if( max < f[i] ) max = f[i] ;
	}
	printf("%lld\n",max);
}
int main()
{
    int t;
	scanf("%d",&t);
	while( t-- )
	{
		solve();
	}
	/*
	// luu tong lon nhat tai vi tri i
		1 101 2 3 100 4 5
		1
		  102
		  	  3
		  	  	6 
	*/
	/*
		1 5 3 5 
	*/
}

