#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FO(i, a, b) for (int i = a; i < b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
#define all(x) x.begin(), x.end()
using namespace std;

typedef pair<int, int> pII;
typedef pair<LL, LL> pLL;
const int IMAX = 1e9;
const LL LMAX = (LL)1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

void solve() {
	int x, k;
	cin >> x >> k;
	if(x % k == 0) {
		cout << 2 << endl;
		cout << x - 1 << " " << 1 << endl;
	}
	else {
		cout << 1 << endl;
		cout << x << endl;
	}	
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
//    freopen("test.out", "w", stdout);
#endif
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
