#include<stdio.h>
#include<string.h>
#include<stdbool.h>
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
int main()
{
//    ios_base::sync_with_stdio(0);
//   	cin.tie(0);
   
	char s[100000];
	scanf("%s",&s);
 
	int t;
	scanf("%d",&t);
	while( t-- ){
		char a[100000];
		scanf("%s",&a);
		bool ok = true;
		int end = strlen(a) - 1;
		int i = strlen(s) - 1;
		while( i >= 0 || end >= 0  ){
			if( s[i] == '*'){
				while( s[i] == '*' && i >= 0 ) i--;
				if( i == - 1 ) break;
				while( a[end] != s[i] && end >= 0 ) end--;
				if( end == - 1 ){
					ok = false;
					break;
				}
			}
			else{
				if( s[i] != a[end] ){
					ok = false;
					break;
				}
				else{
					i--;
					end--;
				}
			}
		}
		if( ok ) printf("%s\n",a);
	}
}      
