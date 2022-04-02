#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
typedef priority_queue<ll> Queue;
typedef vector<ll> vll ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
const ll mod = 1e9+7;
void solve(){
	ll m , k ;
	cin >> m >> k;
	if( k == 0 || m == 0 ){
		cout << 0 << endl;
		return ;
	}
	ll data = 0 ;
	ll dem = 0 ;
	for(ll i = 1 ; data <= m ; i++ ){
		if( data + i*k <= m ){
			data += i*k;
			dem += k;
		}
		else{
			ll data_conlai = m - data ;
			ll sdu = data_conlai/i;
			dem += sdu;
			break;
		}
	}
	cout << dem << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- ){
		solve();
	}
}   
