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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

vector<vector<int>> f(1005,vector<int>(10005,inf));

int Try(int a,int b) {
	if(a<0||b<0||a>b||a>900||b>8100) return -1;
	if( f[a][b] != inf ) {
		return f[a][b];
	}
	if(a==0&&b==0) return 0;
	int k = inf;
	for(int i = 9; i >= 1; i-- ) {
		int temp = Try(a-i,b-i*i);
		if( temp != -1) k = min(k,temp);
	}
	if(k==inf) f[a][b] = -1;
	else f[a][b] = k+1;
	return f[a][b];
}

void solve() {
	f[0][0] = 0;
	int A,B;
	cin >> A >> B;
	int temp = Try(A,B);
	if(temp==-1) cout << -1 << endl;
	else {
		while(A>0&&B>0) {
			for(int i=1;i<=9;i++) {
				if( A>=i && B>=i*i && 1+f[A-i][B-i*i] == f[A][B]) {
					A -= i;
					B -= i*i;
					cout << i;
					break;
				}
			}
		}
		cout << endl;
	}
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
