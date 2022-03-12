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

int k;
string A,B,res;
void solve() {
	res = "";
	cin >> k >> A >> B;
	while( A.size() < B.size() ) A = '0' + A;
	while( B.size() < A.size() ) B = '0' + B;
	int nho = 0;
	FORD(i,A.size()-1,0) {
		int so = int(A[i]-'0') + int(B[i]-'0') + nho;
		if( so >= k ) {
			nho = 1;
			so -= k;
		}
		else nho = 0;
		res = (char)(so+'0') + res;
	}
	if( nho > 0 ) res = '1' + res;
	cout << res << endl;
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
