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
#define maxn 100005

set<string> s,ans;
int x[50] , k , n , stop;
string str[50];

void Init() {
	stop = false;
	FOR(i,1,k) {
		x[i] = i;
	}
}

void Xuat() {
	string res = "";
	FOR(i,1,k) {
		res += str[x[i]];
		res += ' ';
	}
	ans.insert(res);
}

void Sinh() {
	int i = k;
	while( i >= 1 && x[i] == n-k+i ) {
		i--;
	}
	if( i == 0 ) {
		stop = true;
	}
	else {
		x[i]++;
		int p = x[i];
		while( i <= k ) {
			x[i++] = p++;
		}
	}
}

void CT() {
	Init();
	while( !stop ) {
		Xuat();
		Sinh();
	}
}

void solve() {
	s.clear();
	ans.clear();
	cin >> n >> k;	
	FOR(i,1,n) {
		string x;
		cin >> x;
		s.insert(x);
	}
	n = 1;
	for(auto i : s ) {
		str[n++] = i;
	}
	n--;
	if( k < n ) {
		CT();
	}
	for(auto i : ans ) {
		cout << i << endl;
	}
}

int main() {
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
