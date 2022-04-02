#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
void solve(){
	ll a , b;
	cin >> a >> b;
	if( a == 1 ){
		if( b == 1 ) cout << "YES\n";
		else cout << "NO\n";
		return ;
	}
	if( a == 2 || a ==3 ){
		if( b > 3 ) cout <<"NO\n";
		else cout <<"YES\n";
		return ;
	}
	cout <<"YES\n";
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
