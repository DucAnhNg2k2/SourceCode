#include<stdio.h>
/*
0 moo
1 moomooomoo
2 moomooomoomoooomoomooomoo
 
*/
long long demM[35] ;
void set()
{
	demM[0] = 3;
	for(int i = 1 ; i < 35; i++ )
	{
		demM[i] = demM[i-1]*2 + 1 + i + 2 ;
	}
}
//chia de tri
char Moo(long long n,int hang)
{
	if( hang == 0 )
	{
		if( n == 1 ) return 'm';
		else return 'o';
	}
	int lengthThem = hang+3;
	int lengthMoo = (demM[hang] - lengthThem )*1.0/2;
	if( n <= lengthMoo )
	{
		return Moo(n,hang-1);
	}
	else if( n <= lengthMoo + lengthThem )
	{
		if( n == lengthMoo + 1 ) return 'm';
		else return 'o';
	}
	else
	{
		return Moo(n-lengthMoo-lengthThem,hang-1);
	}
}
int main()
{
	set();
	long long n;
	scanf("%lld",&n);
	int hang ;
	for(int i = 0 ; i < 35 ; i++ )
	{
		if( n <= demM[i] )
		{
			hang = i ;
			break;
		}
	}
	printf("%c",Moo(n,hang));
}
 
