#include<bits/stdc++.h>
using namespace std;

struct KMP {
	string s;
	long long base , n , he_so ;
	vector<long long> Pow , hash ;
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
	}
	long long getHash(const int& l,const int& r) {
		long long get = hash[r] - ( hash[l-1] * Pow[r-l+1] ) %base;
			if( get < 0 ) get += base;
			return get;
	}
	long long getHash() {
		return hash[n];
	}
};


int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s1 , s2 ;
	cin >> s1 >> s2;
	int n = s1.size() , m = s2.size();
	KMP str1(s1,26,23052002) ;
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	long long hashP = 0;
	for(int i = 1 ; i <= m ; i++ ) {
		hashP = hashP*26 + s2[i] - 'a';
		hashP %= 23052002;
	}
	for(int i = 1 ; i+m-1 <= n ; i++ ) {
		if( str1.getHash(i,i+m-1) == hashP ) {
			cout << i << ' ';
		}
	}
}
