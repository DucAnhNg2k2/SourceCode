#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll base = 23052002;
int n,m;
ll getHash(int i,int j,const vector<ll> &hash,const vector<ll> &pow) {
	ll hashFull = hash[j] - (hash[i-1]*pow[j-i+1])%base;
	if( hashFull < 0 ) hashFull += base;
	return hashFull;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s1,s2;
	cin >> s1 >> s2;
	n = s1.size();
	m = s2.size();
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	vector<ll> pow(n+5),hash(n+5);
	pow[0] = 1;
	hash[0] = 0; 
	for(int i = 1 ; i <= n ; i++ ) {
		hash[i] = hash[i-1]*26 + s1[i] - 'a';
		hash[i] %= base;
		
		pow[i] = pow[i-1]*26;
		pow[i] %= base;
	}
	ll hashP = 0;
	for(int i = 1 ; i <= m ; i++ ) {
		hashP = hashP*26 + s2[i] - 'a';
		hashP %= base;
	}
	for(int i = 1 ; i+m-1 <= n ; i++ ) {
		if( getHash(i,i+m-1,hash,pow) == hashP ) {
			cout << i << ' ';
		}
	}
}
