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
// https://codeforces.com/contest/987/problem/C
using namespace std;

typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define MAX 1e18
#define MIN -1e18
void solve() {
	int n;
	cin >> n;
	LL s[n+5],c[n+5];
	FOR(i,1,n) cin >> s[i];
	FOR(i,1,n) cin >> c[i];
	LL dp2[n+5],dp3[n+5];
	FOR(i,2,n) {
		LL Min = MAX;
		FO(j,1,i) {
			if( s[j] < s[i] ) {
				Min = min(Min,c[j]+c[i]);
			}
		}
		dp2[i] = Min;
	}
	FOR(i,3,n) {
		LL Min = MAX;
		FO(j,2,i) {
			if( s[j] < s[i] ) {
				Min = min(Min,dp2[j]+c[i]);
			}
		}
		dp3[i] = Min;
	}
	LL Min = MAX;
	FOR(i,3,n) {
		Min = min(dp3[i],Min);
	}
	Min != MAX ? cout << Min : cout << -1;
}

int main(){
	ios_base::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
