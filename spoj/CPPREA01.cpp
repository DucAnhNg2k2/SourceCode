#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
void solve()
{	vector<bool> v(1e7+1,false);
	int n;
	cin >> n;
	ll a[n];
	for(ll i = 0 ; i < n ; i++ ){
		cin >> a[i];
		if( a[i] >= 0 && a[i] <= 1e7 ) v[a[i]] = true;
	}
	for(ll i = 0 ; i < n ; i++){
		if( v[i] ){
			a[i] = i;
		}
		else a[i] = -1;
	//	cout << i << ' ' << v[i] << endl;
	}
	for(int i = 0 ; i < n; i++ ) cout << a[i] << ' ';
	cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while( t-- ){
    	solve();
	}
} 
