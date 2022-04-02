#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
void solve(){
	int n;
	cin >> n;
	int a[n];
	int demL = 0 ;
	int demC = 0 ;
	FOR(0,n){
		cin >> a[i];
		if( a[i]&1) demL++;
		else demC++;
	}
	if( demL == 0 ) cout <<"NO\n";
	else if( demL&1 ) cout <<"YES\n";
	else{
		if( demC >= 1 ) cout <<"YES\n";
		else cout <<"NO\n";
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);
  
  	// le =  <--> so phan tu le la le 
  	int t;
  	cin >> t;
  	while( t-- ){
  		solve();
	  }
}  
