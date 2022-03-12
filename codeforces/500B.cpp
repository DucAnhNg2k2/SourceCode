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
// https://codeforces.com/contest/500/problem/B
int n , a[500], A[500][500] , vs[500] , check[500];
void dfs(int pos,int &Min) {
	if( Min > pos && vs[pos] == 0 ) {
		Min = pos;
	}
	for(int j = 1 ; j <= n ; j++ ) {
		if( A[pos][j] && !check[j] ) {
			check[j] = true;
			dfs(j,Min);
		}
	}
}

void solve() {
	int index[500] ;
	cin >> n;
	FOR(i,1,n) {
		cin >> a[i];
		index[a[i]] = i;
		vs[i] = 0;
	}
	FOR(i,1,n) 
		FOR(j,1,n)  {
			char c;
			cin >> c;
			if( c == '0' ) A[i][j] = 0;
			else A[i][j] = 1;
		}
	FOR(i,1,n) {
		FOR(j,1,n) {
			check[j] = false;
		}
		int pos = 1e6;
		dfs(index[i],pos);
		
		vs[pos] = i;
	}
	FOR(i,1,n) {
		cout << vs[i] << ' ';
	}
	cout << endl;
}

int main(){
   ios::sync_with_stdio(false);
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
