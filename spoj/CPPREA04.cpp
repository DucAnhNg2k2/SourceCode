#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
void solve(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i];
	sort(a+1,a+n+1);
//	for(int i = 1 ; i <= n;  i++) cout << a[i] << ' ';
	int index ;
	if( n%2 == 0 ) index = n/2 + 1;
	else index = n/2 + 2;
	int tmp = index ;
	for(int i = 1 ; i < tmp ; i++ ){
		cout << a[i] << ' ';
		if( index <= n ){
			cout << a[index] << ' ';
			index++ ;
		}
	}
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
