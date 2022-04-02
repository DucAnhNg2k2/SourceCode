#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
	ll n;
	cin >> n;
	ll a[n];
	ll sum = 0 ;
	FOR(0,n){
		cin >> a[i];
		sum += a[i];
	}
	if( sum&1 ){
		cout << sum ; 
	}
	else
	{
		bool check = false;
		ll min = 1e10;
		FOR(0,n){
			if( a[i]&1 && min > a[i] ){
				min = a[i] ;
				check = true;
			}
		}
		if( check == false ){
			cout << 0;
		}  	
		else{
			cout << sum - min;
		}
	}
}      
