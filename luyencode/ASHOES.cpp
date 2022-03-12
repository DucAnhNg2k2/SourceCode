#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define mp make_pair 
#define pb push_back
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define sz(x) (int)(x.size())
#define FOR(i,l,r) for(int i=l;i<=r;++i)
#define FOD(i,l,r) for(int i=r;i>=l;--i)

const long long mod = 1000000007LL;

void solve() {
	int n;
	cin >> n;
	ll x , cnt = 0;
	map<ll,ll> m1,m2;
	FOR(i,1,n) {
		cin >> x;
		m1[x]++;
	}
	FOR(i,1,n) {
		cin >> x;
		m2[x]++;
	}
	for(map<ll,ll>::iterator i = m1.begin() ; i != m1.end() ; i++ ) {
		ll data = (*i).first , ts = (*i).second;
		map<ll,ll>::iterator j = m2.find(data);
		if( j == m2.end() ) {
			cnt += ts;
		}
		else {
			ll TS = (*j).second;
			cnt += max(TS,ts) - min(TS,ts);
		}
	}
	for(map<ll,ll>::iterator i = m2.begin() ; i != m2.end() ; i++ ) {
		if( m1.find((*i).first) == m1.end() ) {
			cnt += (*i).second;
		}
	}
	cout << cnt ;
}
int main()
{	
	faster();
	int T = 1;
//	cin >> T;
	while( T-- ) {
		solve();
	}
}

