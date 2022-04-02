#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
#include<stdio.h>
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   	ll n , l ;
   	cin >> n >> l ;
   	db a[n];
   	FOR(0,n) cin >> a[i] ;
   	db
	    max = -1e9 ;
   	sort(a,a+n);
   	if ( max < a[0] ) max = a[0];
   	FOR(1,n){
   		db h = ((a[i]-a[i-1])/2);
		 if( max < h ) max = h; 	
	}
	if ( max < (l-a[n-1])) max = l - a[n-1] ; 
	printf("%.10lf",max);
} 
