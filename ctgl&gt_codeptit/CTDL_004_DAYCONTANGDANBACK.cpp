#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

LL x[100],a[100],n,k,dem = 0;

void Try(int i,int pos) {
	if( i > k || pos > n ) {
		return;
	}
	if( i == 1 ) {
		x[i] = a[pos];
		if( i == k ) dem++;
		else Try(i+1,pos+1);
		x[i] = -Linf;
	}
	else {
		if( x[i-1] < a[pos] ) {
			x[i] = a[pos];
			if( i == k ) dem++;
			else Try(i+1,pos+1);
			x[i] = -Linf;
		}
	}
	Try(i,pos+1);
}

void solve() {
	cin >> n >> k;
	FOR(i,1,95) {
		x[i] = -Linf;
	}
	FOR(i,1,n) {
		cin >> a[i];
	}
	Try(1,1);
	cout << dem << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
  //  freopen("test.in","r",stdin);
 //   freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
