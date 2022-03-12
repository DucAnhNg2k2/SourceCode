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
 
LL power(const LL &a,const LL &b,const LL &MOD) {
	if( b == 0 ) return 1;
	else if( b == 1 ) return a%MOD;
	else { 
		LL tmp = power(a,b/2,MOD)%MOD;
		if( b&1 ) return ( (tmp*tmp)%MOD * a )%MOD;
		else return (tmp*tmp)%MOD; 
	}
}
void solve() {
	LL dem = 0 , cntA = 0;
	string s;
	cin >> s;
	for(int i = 0 ; i < s.size() ; i++ ) {
		if( s[i] == 'a' ) cntA++;
		else {
			dem += power(2,cntA,MOD)-1;
			dem %= MOD;
		}
	}
	cout << dem << endl;
}
 
int main(){
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
} 
