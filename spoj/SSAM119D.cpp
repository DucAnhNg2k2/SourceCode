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
 
struct Hash {
	string s;
	long long base , n , he_so ;
	long long *Pow , *hash1 , *hash2;
	Hash(const string &_s,const int &_he_so,const long long& _base) {
		s = _s;
		he_so = _he_so;
		base = _base;
		n = s.size();
		s = ' ' + s;
		Pow = new long long[n+5];
		hash1 = new long long [n+5];
		hash2 = new long long [n+5];
		Init();
	}		
	void Init() {
		Pow[0] = 1;
		hash1[0] = 0;
		for(int i = 1 ; i <= n ; i++ ) {
			hash1[i] = hash1[i-1] * he_so + s[i] - 'a';
			hash1[i] %= base;
			
			Pow[i] = Pow[i-1] * he_so ;
			Pow[i] %= base;
		}
		
		hash2[n+1] = 0;
		for(int i = n ; i >= 1 ; i-- ) {
			hash2[i] = hash2[i+1] * he_so + s[i] - 'a';
			hash2[i] %= base;
		}
	}
	long long getHash1(const int& l,const int& r) {
		long long get = hash1[r] - ( hash1[l-1] * Pow[r-l+1] ) %base;
			if( get < 0 ) get += base;
			return get;
	}
	long long getHash2(const int& l,const int& r) {
		long long get = hash2[l] - ( hash2[r+1] * Pow[r-l+1] ) %base;
			if( get < 0 ) get += base;
			return get;
	}
	~Hash() {
		delete []Pow;
		delete []hash1;
		delete []hash2;
	}
//	~Hash() {
//		delete Pow,hash1,hash2;
//	}
//	long long getHash() {
//		return hash[n];
//	}
};
 
 
bool check(int m ,Hash *str) {
	for(int i = 1 ; i+m-1 <= str->n ; i++ ) {
		if( str->getHash1(i,i+m-1) == str->getHash2(i,i+m-1) ) 
			return true;
	}
	return false;
}
 
int n ; string s;
 
vector<int> chan,le;
void solve() {
//	cin >> n >> s;
	cin >> s;
	n = s.size();
	Hash *str = new Hash(s,26,MOD);
	
	chan.clear() , le.clear();
	for(int i = 0 ; i <= n ; i += 2 ) {
		chan.push_back(i);
	}
	for(int i = 1 ; i <= n ; i += 2 ) {
		le.push_back(i);
	}
	
	int l = 0 , r = chan.size()-1 , Max = 0;
	while( l <= r ) {
		int m = (l+r)/2;
		if( check(chan[m],str) ) {
			Max = max(Max,chan[m]);
			l = m+1;
		}
		else r = m-1;
	}
	
	l = 0 , r = le.size()-1;
	while( l <= r ) {
		int m = (l+r)/2;
		if( check(le[m],str) ) {
			Max = max(Max,le[m]);
			l = m+1;
		}
		else r = m-1;
	}
	cout << Max << endl;
	delete str;
}
 
int main(){
//	freopen("TEST.txt","r",stdin);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ) {
    	solve();
	}
    return 0;
} 
