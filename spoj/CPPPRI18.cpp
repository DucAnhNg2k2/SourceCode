#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
void solve(){
	int m , n , a , b;
	cin >> m >> n >> a >> b;
	int dem = 0 ;
	for(int i = m ; i <=n ; i++ ){
		if( i%a==0 || i%b == 0) dem++;
	}
	cout << dem << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
//   	cin.tie(0);
  	int t;
  	cin >> t;
  	while( t-- ){
  		solve();
	}
}      
