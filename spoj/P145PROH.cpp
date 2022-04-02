#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
ll gcd(ll a,ll b){
	while( b!= 0 ){
		ll x = a%b;
		a = b;
		b = x;
	}
	return a;
}
ll bcnn(ll x ,ll y){
	return x*y/(gcd(x,y));
}
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
   	ll n;
   	cin >> n;
   	ll max = 0 ;
	if( n == 1 ){
		cout << 1 ;
		 return 0;
	}
	if( n == 2 ){
		cout << 2;
		return 0;
	}
   	if( n > 30 ){
   		for(ll i = n-30 ; i <= n ; i++ ){
   		for(ll j = i+1 ; j <= n ; j++ ){
   			for(ll k = j+1 ; k <= n ; k++ ){
   				 ll s = bcnn(i,bcnn(j,k));
   				 if( max < s ) max = s; 
			}
		}
	}
}
   	if( n <= 30 ){
   		for(ll i = 1 ; i <= n ; i++ ){
   			for(ll j = i+1 ; j <= n ; j++ ){
   				for(ll k = j+1 ; k <= n ; k++ ){
   					ll s = bcnn(i,bcnn(j,k));
   					if( max < s ) max = s;
				   }
			   }
		   }
	   }
	   cout << max ;	
}      
