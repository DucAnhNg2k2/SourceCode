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

void solve() {
	int n , sum = 0;
	cin >> n;
	string s1,s2;
	cin >> s1 >> s2;
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	int f[n+5];
	FOR( i , 1 , n ) {
		for(int j = 0 ; j <= 2 ; j++ ) 
		{
			if( j != (int)(s1[i] - '0' ) && j != (int)(s2[i] - '0')) {
				f[i] = j;
				break;
			}	
		}
	}
	f[0] = f[n+1] = -1;
	FOR( i , 1 , n ) {
		if( f[i] == 0 && f[i+1] == 1 ) {
			f[i] = 2;
			f[i+1] = -1;
		}
		else if( f[i] == 1 && f[i+1] == 0 ) {
			f[i] = 2;
			f[i+1] = -1;
		}
	}
	FOR( i , 1 , n ) {
		if( f[i] == 1 || f[i] == 2 ) {
			sum += f[i];
		}
	}
	cout << sum << endl;
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
