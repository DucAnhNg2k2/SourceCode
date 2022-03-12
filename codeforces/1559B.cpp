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
// https://codeforces.com/contest/1559/problem/B
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

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	s = '@' + s;
	s =  s +  '@';
	queue<int> q;
	FOR ( i , 1 , n ) {
		if( s[i] != '?' ) {
			q.push(i);
		}
	}
	if( q.empty() ) {
		q.push(1);
		s[1] = 'B';
	}
	while( !q.empty() ) {
		int pos = q.front();
		q.pop();
		if( s[pos - 1] == '?' ) {
			q.push(pos-1);
			s[pos - 1 ] = s[pos] xor ('B' xor 'R');
		}
		if( s[pos + 1] == '?' ) {
			q.push(pos+1);
			s[pos + 1 ] = s[pos] xor ('B' xor 'R');
		}
	}
	FOR( i , 1 , n ) {
		cout << s[i];
	}
	cout << endl;
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

