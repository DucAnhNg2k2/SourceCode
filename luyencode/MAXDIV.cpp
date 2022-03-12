#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;
typedef vector<long long> vll;
typedef vector<int> vi;

int bin_search(const vi &a,int l,int r,int x) {
	int result = -1;
	while( l <= r ) {
		int m = (l+r)/2;
		if( a[m] == x ) {
			result = m;
			l = m + 1;
		}
		else if( a[m] > x ) {
			r = m - 1;
		}
		else l = m + 1;
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	freopen("TEST.txt","r",stdin);
	int n ; ll k, cnt = 0;
	cin >> n >> k;
	vll a(n+5);
	for(int i = 1 ; i <= n ; i++ ) {
		cin >> a[i];
	}
	vi f(n+5);
	f[0] = 0;
	for(int i = 1 ; i <= n ; i++ ) {
		f[i] = f[i-1];
		if( a[i]%k == 0 ) f[i]++;
	}
	for(int i = 1 ; i <= n ; i++ ) {
		int l , r;
		if( f[i] == f[n] ) {
			l = i , r = n;
		}
		else if( a[i]%k != 0 ) {
			l = i , r = bin_search(f,l,n,f[i]+1);
		} 
		else {
			l = i , r = bin_search(f,l,n,f[i]);
		}
	//	cout << l << ' ' << r << ' ' << a[l] << ' ' << a[r] << endl;
		cnt += (r-l+1);
	}
	cout << cnt << endl;
}
