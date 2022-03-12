#include<stdio.h>

long long demF[100];
void set()
{
	demF[1] = 1;
	demF[2] = 1;
	for(int i = 3 ; i < 100 ; i++ )
	{
		demF[i] = demF[i-2] + demF[i-1];
	}
}
char ChiaDeTri(long long n,long long i)
{	
	if( n == 1 ) return 'A';
	if( n == 2 ) return 'B';
	if( n == 3 )
	{
		if( i == 1 ) return 'A';
		else return 'B';
	}
	long long Begin = demF[n-2];
	if( i <= Begin ) return ChiaDeTri(n-2,i);
	else return ChiaDeTri(n-1,i-Begin);
}
int main()
{
	set();
	int t;
	scanf("%d",&t);
	while( t-- )
	{
		long long n,i;
		scanf("%lld %lld",&n,&i);
		printf("%c\n",ChiaDeTri(n,i));
	}
}
