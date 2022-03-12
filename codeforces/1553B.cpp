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
// https://codeforces.com/contest/1553/problem/B
typedef pair<int,int>II;
typedef pair<LL,LL>pLL;
typedef vector<int> vI;
typedef vector<LL> vLL;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007LL;
#define maxn 10005

template<class T> T gcd(const T&,const T&);
template<class T> T lcm(const T&,const T&);
template<class T> bool IsPrime(const T&);
template<class T> string toString(T);
LL power(const LL&,const LL&,const LL&);
LL power(const LL&,const LL&);
LL toLL(const string &s);
vector<bool> Eratosthenes(const int&);
vI eratosthenes(const int&);
vI MinPrime(const int& N);
vLL factorize(LL);
struct Hashing {
	string s;
	LL base , n , he_so , *Pow , *hashU , *hashD;
	Hashing(string &s,const int &he_so,const LL& base) {
		this->s = s;
		this->he_so = he_so;
		this->base = base;
		n = s.size();
		this->s = ' ' + this->s;
		Pow = new LL[n+5]; hashU = new LL[n+5]; hashD = new LL[n+5];
		build();
	}		
	void build() {
		Pow[0] = 1; hashU[0] = 0; hashD[n+1] = 0;
		FOR(i,1,n) {
			hashU[i] = hashU[i-1] * he_so + s[i] - 'a'; hashU[i] %= base;
			Pow[i] = Pow[i-1] * he_so ; Pow[i] %= base; }
		FORD(i,n,1) {
			hashD[i] = hashD[i+1] * he_so + s[i] - 'a'; hashD[i] %= base;
		}
	}
	LL getHashU(const int& l,const int& r) {
		LL get = hashU[r] - ( hashU[l-1] * Pow[r-l+1] )%base ; if( get < 0 ) get += base; 
		return get;
	}
	LL getHashD(const int& l,const int& r) {
		LL get = hashD[l] - ( hashD[r+1] * Pow[r-l+1] )%base ; if( get < 0 ) get += base; 
		return get;
	}
	LL getHash() { return hashU[n]; }
	~Hashing() { delete []Pow; delete []hashU; delete []hashD; }
};


bool solve() {
	string s1,s2;
	cin >> s1 >> s2;
	int n = s1.size() , m = s2.size();
	Hashing S1(s1,26,MOD) , S2(s2,26,MOD);
	s1 = ' ' + s1; s2 = ' ' + s2;
	FOR(i,1,n) {
		if( s1[i] == s2[1] ) {
			int pos = 1;
			for(int j = i ; j <= n ; ++j ) {
				if( s1[j] != s2[pos] || pos > m )
					break;
				if( pos == m ) 
					return true;
				int h = m - pos;
				if( j - h >= 1 && S2.getHashU(pos+1,m) == S1.getHashD(j-h,j-1) )
					return true;
				pos++;
			}
		}
	}
	return false;
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
    	if( solve() ) cout << "YES" << endl;
    	else cout << "NO" << endl;
    return 0;
}

template<class T> T gcd(const T& a,const T& b) { return __gcd(a,b); }
template<class T> T lcm(const T& a,const T& b) { return ( a/__gcd(a,b) )*b; }
template<class T> bool IsPrime(const T& n) {
	for(T i = 2 ; i <= sqrt(n) ; ++i ) if( n%i == 0 ) return false;
	return n > 1;
}
template<class T> string toString(T n) {
	bool check = false; string res = "";
	if( n == 0 ) res += '0';
	if( n < 0 ) { n = -n; check = true; }
	while( n > 0 ) { res = (char)(n%10+'0') + res; n /= 10; }
	if( check ) res = '-' + res;
	return res; 
}
LL toLL(const string& s) {
	LL res = 0;
	for(int i = 0 ; i < s.size() ; i++ ) res = res*10 + (int)(s[i]-'0');
	return res; 
}
LL power(const LL& a,const LL& b,const LL& MOD) {
	if( b == 0 ) return 1;
	else if( b == 1 ) return a%MOD;
	else { LL tmp = power(a,b/2,MOD)%MOD;
		   if( b&1 ) return ( (tmp*tmp)%MOD * a )%MOD;
		   else return (tmp*tmp)%MOD; }
}
LL power(const LL& a,const LL& b) { return power(a,b,MOD); }
vector<bool> Eratosthenes(const int& N) {
	vector<bool> IsPrime(N+5,true); IsPrime[0] = IsPrime[1] = false;
	for(LL i = 2 ; i*i <= (N) ; ++i ) 
		if( IsPrime[i] )
			for(LL j = i*i ; j <= N ; j += i )
				IsPrime[j] = false;
	return IsPrime;
}
vector<int> eratosthenes(const int& N) {
	vector<bool> IsPrime = Eratosthenes(N); vector<int> numbersPrime;
	FOR(i,1,N) if( IsPrime[i] ) numbersPrime.pb(i);
	return numbersPrime;
}
vector<int> MinPrime(const int& N) {
	vector<int> minPrime(N+5,0);
	for(LL i = 2 ; i*i <= N ; ++i ) 
		if ( minPrime[i] == 0 ) 
			for(LL j = i*i ; j <= N ; j += i ) 
				minPrime[j] = i;
	for(int i = 2 ; i <= N ; ++i )  if( minPrime[i] == 0 ) minPrime[i] = i;
	return minPrime;
}
vector<LL> factorize(LL n) {
	vector<LL> res;
	for(LL i = 2 ; i*i <= n ; ++i ) while( n%i == 0 ) {
		res.pb(i);
		n /= i;
	}  if( n != 1 ) res.pb(n); return res;
}
