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
	int n;
	cin >> n;
	ll a[n];
	FOR(0,n) cin >> a[i];
	if( n == 1 ){
		cout << 0;
		return 0;
	}
	if( n == 2 ){
		if( a[0] <= a[1] ) cout << 0;
		else cout << 1;
		return 0;
	}
	int dem = 0;
	FOR(0,n-1){
		if( a[i] > a[i+1] ) dem++ ;
	}
	if( dem >= 2 ){
		cout << -1 ;
		return 0;
	}
	if( dem == 0 ){
		cout << 0 ;
		return 0;
	}
	if( dem == 1 ){
		if( a[0] < a[n-1] ){
			cout << -1 ;
			return 0;
		}
		int min = 1e7 , index ;
		FOR(0,n){
			if( min > a[i] ){
				min = a[i];
				index = i + 1;
			}
		}
	//	cout << index << endl;
		cout << n - index + 1 ;
	}
}      
