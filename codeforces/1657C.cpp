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

struct Hash {
	string s; 
	LL base, n, heso, *Pow, *hashU, *hashD;
	Hash(string _s,int _heso,LL _base) {
		s = _s, heso = _heso, base = _base;
		n = s.size();
		s = ' ' + s;
		Pow = new LL[n+5];
		build();
		buildD();
		buildU();
	}		
	void build() { 
		Pow[0] = 1; 
		for(int i = 1; i <= n; ++i) { 
			Pow[i] = Pow[i-1] * heso;
			Pow[i] %= base;
		} 
	}
	void buildU() {
		hashU = new LL[n+5]; 
		hashU[0] = 0;
		for(int i = 1; i <= n; ++i) { 
			hashU[i] = hashU[i-1] * heso + s[i] - 'a';
			hashU[i] %= base;
		}
	}
	void buildD() {
		hashD = new long long[n+5]; 
		hashD[n+1] = 0;
		for(int i = n; i >= 1; --i) { 
			hashD[i] = hashD[i+1] * heso + s[i] - 'a';
			hashD[i] %= base;
		}
	}
	LL getHashU(int l,int r) {
		long long get = hashU[r] - ( hashU[l-1] * Pow[r-l+1] )%base ; 
		if( get < 0 ) get += base; 
		return get; 
	}
	LL getHashD(int l,int r) {
		long long get = hashD[l] - ( hashD[r+1] * Pow[r-l+1] )%base ; 
		if( get < 0 ) get += base; 
		return get; 
	}
	~Hash() { 
		delete[]Pow; 
		if(hashU != NULL) 
			delete []hashU; 
		if(hashD != NULL) 
			delete []hashD; 
	}
};

void solve() { 
	int n;
	cin >> n;
	string s;
	cin >> s;
	Hash hash(s,26,MOD);
	s = ' ' + s;
	int num = 0,ans = 0;
	LL h1 = 0, h2 = 0,j = 1;
	FOR(i,1,n) {
		if( s[i] == '(') {
			if( num >= 0 ) num++;
		}
		else {
			num--;
			if( num == 0 ) {
				ans++;
				j = i+1;
				continue;
			}
		}
		int m = (i+j)/2;
		int size = i-j+1;
		if( size%2 == 0 && hash.getHashU(j,m) == hash.getHashD(m+1,i) && i != j ) {
			ans++;
			num = 0;
			j = i+1;
		}
		if( size%2 == 1 && hash.getHashU(j,m) == hash.getHashD(m,i) && i != j ) {
			ans++;
			num = 0;
			j = i+1;
		}
	}
	cout << ans << ' ' << n-j+1 << endl;
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