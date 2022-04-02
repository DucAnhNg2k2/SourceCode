#include<stdio.h>
#include<math.h>
/* 
	2 =	á»? vá»? tr?­ 2 ( 2^1 )
	3 = á»? vá»? tr?­ 4 ( 2^2 )
	4 = á»? vá»? tr?­ 8 ( 2^3 )
 
	->> á»? vá»? tr?­ k ( 2^i ) l?  i+1
 
	1 2 3 4 5 6 7
	1 2 1 3 1 2 1
*/
long long ChiaDeTri(long long k)
{	
	
	if( k == 1 ) return 1;
	if( k == 2 ) return 2;
	double temp = log2(k); 
	long long i = temp;
	if( temp == i )
	{	// if k = 2^i 
		return i+1;
	}
	else
	{
		k = k - (long long)pow(2,i);
	}
	return ChiaDeTri(k);
}
int main()
{	
	
	int t;
	scanf("%d",&t);
	while( t-- )
	{
		int n; long long k;
		scanf("%d %lld",&n,&k);
		printf("%lld\n",ChiaDeTri(k));
	}
} 
