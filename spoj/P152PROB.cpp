#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    int n , k ;
    cin >> n >> k ;
    int a[n];
    FOR(0,n) cin >> a[i];
    if( n == 0 ){
    	cout << 0;
    	return 0 ;
	}
    sort(a,a+n);
    int dem = 1 ;
    FOR(1,n){
    	if( a[i]-a[i-1] > k ) dem++;
	}
	cout << dem ; 
} 
