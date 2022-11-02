#include<stdio.h>
#include<math.h>

long long ChiaDeTri(long long k)
{	
	
	if( k == 1 ) return 1;
	if( k == 2 ) return 2;
	double temp = log2(k); 
	long long i = temp;
	if( temp == i )
	{
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

