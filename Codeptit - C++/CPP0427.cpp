#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;

int cs = 1;
void solve(){
	int n;
	cin >> n;
	ll a[n];
	FOR(0,n) cin >> a[i];
	FOR(0,n){
		if( a[i+1] != 0 && a[i] == a[i+1] ){
			a[i] *= 2 ;
			a[i+1] = 0 ;
		}
	}
	int dem = 0 ;
	FOR(0,n){
		if( a[i] !=0 ) cout << a[i] << ' ';
		else dem++;
	}
	FOR(0,dem) cout << 0 << ' ';
	cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
	while( t-- ){
		solve();
	}
}  
