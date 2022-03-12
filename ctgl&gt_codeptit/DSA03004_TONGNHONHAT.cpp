#include<bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

void solve() { 
	int n;
	cin >> n;
	LL a[n+5] = {};
	FOR(i,1,n) {
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	LL s1 = 0,s2 = 0;
	FOR(i,1,n) {
		if( i&1 ) s1 = s1*10 + a[i];
		else s2 = s2*10 + a[i];
	}
	cout << s1 + s2 << endl;
}		

int main(){
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
