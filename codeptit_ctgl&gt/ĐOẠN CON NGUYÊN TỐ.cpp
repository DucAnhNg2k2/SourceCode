#pragma GCC optimize("O2")
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
#define all(x) x.begin(),x.end()
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int IMAX = 1e9;
const LL LMAX = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 10000005

vector<bool> boolEratosthenes(int N) {
	vector<bool> IsPrime(N+5,true); 
	IsPrime[0] = IsPrime[1] = false;
	for(LL i = 2 ; i*i <= (N) ; ++i ) 
		if( IsPrime[i] )
			for(LL j = i*i ; j <= N ; j += i )
				IsPrime[j] = false;
	return IsPrime;
}

vector<int> intEratosthenes(int N) {
	vector<bool> IsPrime = boolEratosthenes(N); 
	vector<int> numbersPrime;
	for(int i = 1 ; i <= N ; ++i ) 
		if( IsPrime[i] ) 
			numbersPrime.pb(i);
	return numbersPrime;
}

void solve() {
    string p;
    int l, h, dem = 0;
    cin >> l >> h >> p;
    vector<int> v = intEratosthenes(maxn);
    FOR(i,l-1,h-1) {
        if(to_string(v[i]).find(p) != -1) {
            dem++;
        }
    }
    cout << dem << endl;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#ifndef ONLINE_JUDGE
   freopen("test.in","r",stdin);
   freopen("test.out","w",stdout);
#endif
	int T = 1;
//    cin >> T;
	while(T--) {
        solve();
    }
    return 0;
}
