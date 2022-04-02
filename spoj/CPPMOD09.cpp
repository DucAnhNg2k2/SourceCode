#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
#define sz(x) (x).size()
typedef priority_queue<ll> Queue;
typedef vector<ll> vl ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
const ll mod = 1e9+7;
ll a[1005][1005] = {0};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll cot = 1 ;
	for(ll i = 1 ; i < 1005 ; i++ ){
		for(ll j = 1 ; j <= cot ; j++ ){
			if( j == 1 ) a[i][j] = i;
			else if( j == cot ) a[i][j] = 1;
			else{
				a[i][j] =  a[i-1][j] + a[i-1][j-1] ;
				a[i][j] %= mod;
			}
		}
		cot++;
	}
	int t;
	cin >> t;
	while( t-- ){
		ll n , k;
		cin >> n >> k;
		cout << a[n][k] << endl;
	}
}    
