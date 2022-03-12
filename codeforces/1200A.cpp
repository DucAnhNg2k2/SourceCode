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
// https://codeforces.com/contest/1200/problem/A
typedef pair<int,int> II;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e12;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	int n;
	cin >> n;
	bool s[10] = {0};
	while( n-- ) {
		char c;
		cin >> c;
		if( c == 'L' ) {
			FOR(i,0,9) {
				if( !s[i] ) {
					s[i] = true;
					break;
				} 
			}
		}
		else if( c == 'R' ) {
			FORD(i,9,0) {
				if( !s[i] ) {
					s[i] = true;
					break;
				}
			}
		}
		else {
			s[(int)(c-'0')] = false;
		}
	}
	FOR(i,0,9) {
		cout << s[i];
	}
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
