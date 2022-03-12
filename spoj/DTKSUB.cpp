#include<bits/stdc++.h>
using namespace std;

struct KMP {
	string s;
	long long base , n , he_so ;
	vector<long long> Pow , hash , hash2;
	KMP(const string &_s,const int &_he_so,const long long& _base) {
		s = _s;
		he_so = _he_so;
		base = _base;
		n = s.size();
		s = ' ' + s;
		Pow.resize(n+5);
		hash.resize(n+5);
		Init();
	}		
	void Init() {
		Pow[0] = 1;
		hash[0] = 0;
		for(int i = 1 ; i <= n ; i++ ) {
			hash[i] = hash[i-1] * he_so + s[i] - 'a';
			hash[i] %= base;
			
			Pow[i] = Pow[i-1] * he_so ;
			Pow[i] %= base;
		}
		hash[n+1] = 0 ;
		for(int i = n ; i >= 1 ; i-- ) {
			hash[i] = hash[i-1] * he_so + s[i] - 'a';
			hash[i] %= base;
		}
	}
	long long getHash(const int& l,const int& r) {
		long long get = hash[r] - ( hash[l-1] * Pow[r-l+1] ) %base;
			while( get < 0 ) get += base;
			return get;
	}
	long long getHash() {
		return hash[n];
	}
};

int N = 1e6+9;
int n , k , dem[1000010] ;
bool check(int size,KMP str) {
	for(int i = 0 ; i < 1000010 ; i++ )
		dem[i] = 0;
	for(int i = 1 ; i+size-1 <= str.n ; i++ ) {
		long long hash = str.getHash(i,i+size-1);
		dem[hash]++;
		if( dem[hash] >= k ) 
			return true;
	}
	return false;
}

int main() {
	cin >> n >> k;
	string s;
	cin >> s;
	KMP str(s,26,1e6+9);
	int l = 1 , r = n , Max = -1;
	while( l <= r ) {
		int m = (l+r)/2;
		if( check(m,str) ) {
			Max = m;
			l = m+1;
		}
		else {
			r = m-1;
		}
	}
	cout << Max << endl;
}
