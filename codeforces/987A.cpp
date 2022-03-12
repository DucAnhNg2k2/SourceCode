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
// https://codeforces.com/contest/987/problem/A
typedef pair<int,int>II;
const long double PI = 2*acos(0.0);
const double eps = 1e-6;
const int infi = 1e9;
const LL Linfi = (LL) 1e12;
const LL MOD = 1000000007;
#define maxn 10005

char s1[6][50] = {"purple","green","blue","orange","red","yellow"};
char s2[6][50] = {"Power","Time","Space","Soul","Reality","Mind"};
void solve() {
	int n,dem = 0;
	scanf("%d",&n);
	char s[n][50];
	for(int i = 0 ; i < n ; i++ ) {
		scanf("%s",&s[i]);
	}
	for(int i = 0 ; i < 6 ; i++ ) {
		bool check = true;
		for(int j = 0 ; j < n ; j++ ) {
			if( strcmp(s1[i],s[j]) == 0 ) {
				check = false;
				break;
			}
		}
		if( check ) {
			dem++;
		}
	}
	printf("%d\n",dem);
	for(int i = 0 ; i < 6 ; i++ ) {
		bool check = true;
		for(int j = 0 ; j < n ; j++ ) {
			if( strcmp(s1[i],s[j]) == 0 ) {
				check = false;
				break;
			}
		}
		if( check ) {
			printf("%s\n",s2[i]);
		}
	}
}

int main(){
  
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
