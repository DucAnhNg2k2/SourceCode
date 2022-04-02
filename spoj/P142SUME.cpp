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
 
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005
int n,k,s,dem = 0;
 
void Try(int i,int sum,int max) {
	if( i == k+1 ) {
		if( sum == s ) dem++;
		return;
	}
	for(int j = max+1 ; j <= n ; j++ ) {
		if( i <= k && sum+j <= s ) {
			Try(i+1,sum+j,j);
		}
	}
}
 
bool solve() {
 
	cin >> n >> k >> s;
	if( n == 0 && k == 0 && s == 0 ) {
		return true;
	}
	dem = 0;
	Try(1,0,0);
	cout << dem << endl;
	return false;
}
 
int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( true )
    {
    	if( solve() ) 
			break;
	}
    return 0;
}
