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
	string s1,s2;
	cin >> s1 >> s2;
	int dd[200] = {};
	FO(i,0,s2.size()) {
		dd[s2[i]]++;
	}
	char pos = '9';
	FO(i,0,s1.size()) { 
		if( pos == '0' ) break;
		while( dd[pos] == 0 ) 
			pos--;
		if( s1[i] < pos ) {
			s1[i] = pos;
			dd[pos]--;
		}
	}
	cout << s1 << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
//#ifndef ONLINE_JUDGE
//    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
//#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
} 
