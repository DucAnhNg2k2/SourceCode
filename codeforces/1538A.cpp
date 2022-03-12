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

bool cmp(pair<LL,LL> a,pair<LL,LL> b) {
	return a.fi < b.fi;
}

void solve() {
	int n , Min = infi;
	cin >> n;
	pair<LL,LL> a[n+5];
	FOR( i , 1 , n ) {
		cin >> a[i].fi;
		a[i].se = i;
	}
	sort(a+1,a+1+n,cmp);
	int pos1 = a[1].se , pos2 = a[n].se;
	if( pos1 > pos2 ) swap(pos1,pos2);
	Min = min(Min,pos2);
	Min = min(Min,n-pos1+1);
	Min = min(Min,pos1+n-pos2+1);
	cout << Min << endl;
}
int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
//freopen("1.in","r",stdin);
//freopen("1.out","w",stdout);
	int t;
	cin >> t;
	while( t-- )
    	solve();
    return 0;
}
