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
#define maxn 10005

void solve() {
	int m;
	cin >> m;
	cin.ignore();
	bool vs[m+5][m+5] = {};
	FOR(i,1,m) {
		string s;
		getline(cin,s);
		s += ' ';
		int so = 0;
		for(auto j:s) {
			if( j >= '0' && j <='9' ) so = so*10 + (int)(j-'0');
			else if( so > 0 ){
				vs[i][so] = vs[so][i] = 1;
				so = 0;
			}
		}
	}
	FOR(i,1,m) {
		FOR(j,1,m) {
			cout << vs[i][j] << ' ';
		}
		cout << endl;
	}
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
