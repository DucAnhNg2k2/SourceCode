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

void solve() {
	int n , Min = 100;
	cin >> n;
	double a[n+5];
	FOR(i,1,n) {
		cin >> a[i];
	} 
	if( n == 1 ) {
		cout << 0 << endl;
		return;
	}
	for(int i = 1 ; i <= n ; i++ ) {
		for(int j = 1 ; j < i ; j++ ) {
			double P1 = (a[i] - a[j]);
			int P2 = i-j;
			int dem = 0;
			for(int k = i-1 ; k >= 1 ; k-- ) {
				double s1 = a[i]-a[k];
				double s2 = i-k;
				if( s2*P1 != s1*P2 ) dem++;
			}
			for(int k = i+1 ; k <= n ; k++ ) {
				double s1 = a[k]-a[i];
				double s2 = k-i;
				if( s2*P1 != s1*P2 ) dem++;
			}
			Min = min(Min,dem);
		}
	}
	cout << Min << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
