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
	if( a == b ){
		cout << "infinity" ;
		return ;
	}
	else if ( a < b ){
		cout << 0 ;
		return ;
	}
	else
	{
		// x*k = a - b
		ll s = a - b;
		int dem = 0 ;
		for(int k = 1 ; k <= sqrt(s) ; k++ ){
			if( s%k == 0 ){
				ll x = k ;
				if( a%x == b ) dem++;
				x = s/k;
				if( a%x == b ) dem++;
			}
		}
		ll h = sqrt(s);
		if( h*h == s) dem--;
		cout << dem ;
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//   	int t;
//   	cin >> t;
//   	while( t-- ){
   		solve();
//	}
}  
