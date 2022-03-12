#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;
typedef vector<long long> vll;
typedef vector<int> vi;

#define mp make_pair 
#define pb push_back
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define sz(x) (int)(x.size())
#define FOR(i,l,r) for(int i=l;i<=r;++i)
#define FOD(i,l,r) for(int i=r;i>=l;--i)

int main() {
	faster();
	int n,k;
	cin >> n >> k;
	vll a(n);
	FOR(i,0,n-1) cin >> a[i];
	vll f(n);
	ll max = -1e18;
	FOR(i,0,n-1) {
		if( max < a[i] ) max = a[i];
		f[i] = max;
	}
	while( k-- ) {
		int m;
		cin >> m;
		cout << f[m-1] << endl;
	}
}
