#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h>
typedef long long ll;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; ++i )
#define sz(x) strlen(x) 
ll tmp[500] ;
int main()
{	
	char s[100] ;
	scanf("%s",s);
	ll dem = 0 ;
	FOR(0,sz(s))
	{	char temp = s[i] ;
		int j = 0 ;
		FORR(j,0,500)
		{
			tmp[j] = 0;
		}
		j = i+1;
		while( s[j] != temp && j < sz(s) )
		{	
			tmp[s[j]]++;
			j++;
		}
		while( j < sz(s) ) 
		{
			if( tmp[s[j]] == 1 ) dem++;
			j++;
		}
	}
	printf("%lld",dem);
} 
