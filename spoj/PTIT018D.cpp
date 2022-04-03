#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h>
typedef long long ll;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; ++i )
#define sz(x) strlen(x) 
char P[]="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s[50000] ;
void solve()
{	
	scanf("%s",s);
	int n = sz(s) ;
	char s1[50000];
	char s2[50000];
	FOR(0,n)
	{
		s1[i] = s[i] ;
	}	s1[n/2] = '\0';
	int pos = 0 ;
	FOR(n*1.0/2,n)
	{
		s2[pos] = s[i] ;
		pos++;
	}	s2[pos] ='\0';
	int sum = 0 ;
	FOR( 0,sz(s1) ) sum += ( s1[i]-65 ) ;
	sum %= 26;
	FOR( 0,sz(s1) )
	{
		FORR(j,0,sz(P))
		{
			if( s1[i] == P[j] )
			{
				s1[i] = P[j+sum] ;
				break;
			}
		}
	}
	sum = 0 ;
	FOR( 0,sz(s2) ) sum += (s2[i]-65);
	sum %= 26;
	FOR( 0,sz(s2) )
	{
		FORR(j,0,sz(P))
		{
			if( s2[i] == P[j] )
			{
				s2[i] = P[j+sum] ;
				break;
			}
		}
	}
	FOR( 0,sz(s1) )
	{
		FORR(j,0,sz(P))
		{
			if( s1[i] == P[j] )
			{	
				s2[i] -= 65;
				s1[i] = P[j+s2[i]];
				break;
			}
		}
	}
	printf("%s\n",s1);
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
