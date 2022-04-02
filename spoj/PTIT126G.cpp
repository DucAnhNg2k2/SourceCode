#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FO(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define debug cout << "YES" << endl
 
using namespace std;
 
typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005
 	
void solve() {
	int n,m;
	vector<LL> a(1005);
	vector<LL> f(10005,Linfi);
	cin >> n >> m;
	FOR(i,1,n) {
		cin >> a[i];
	}
	FOR(i,1,m) {
		FOR(j,1,n) {
			if( i == a[j] ) {
				f[i] = 1;
			}
			if( i - a[j] > 0 && f[i-a[j]] != 0 ) {
				f[i] = min(f[i],f[i-a[j]]+1);
			}
		}
	}
	if( f[m] == Linfi ) cout << -1;
	else cout << f[m];
}
 
int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
    solve();
    return 0;
} 
