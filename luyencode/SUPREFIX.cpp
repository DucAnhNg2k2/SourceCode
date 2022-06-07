#include<stdio.h>
#include<string.h>
#define maxn 100005
#define LL long long
// nop bang C++ with 02
const LL MOD = 1e9 + 7;
LL Pow[maxn] = {},hash1[maxn] = {},hash2[maxn] = {};
char a[maxn], b[maxn];

long long getHash(LL hash[],int l,int r) {
	long long get = hash[r] - (hash[l-1] * Pow[r-l+1])%MOD; 
	if(get < 0) get += MOD; 
	return get; 
}

void solve() {
    Pow[0] = 1;
    scanf("%s%s",a,b);
    int n = strlen(a), m = strlen(b),ans = 0;
	for(int i = 1; i < maxn; ++i) { 
		Pow[i] = Pow[i-1] * 27;
		Pow[i] %= MOD;
	} 
    hash1[0] = 0;
    hash2[0] = 0;
	for(int i = 1; i <= n; ++i) { 
		hash1[i] = hash1[i-1] * 27 + a[i-1] - 'a';
		hash1[i] %= MOD;
	}
	for(int i = 1; i <= m; ++i) { 
		hash2[i] = hash2[i-1] * 27 + b[i-1] - 'a';
		hash2[i] %= MOD;
	}
	if(n < m) {
		for(int i = 1 ; i <= n; i++) {
			if(getHash(hash1,i,n) == getHash(hash2,1,i)) {
				ans = i;
				break;
			}
		}
	}
	else {
		for(int i = m; i >= 1; i--) {
			if(getHash(hash2,1,i) == getHash(hash1,n-i+1,n)) {
				ans = i;
				break;
			}
    	}
	}
    for(int i = 1; i <= n; i++) printf("%c",a[i-1]);
    for(int i = ans+1; i <= m; i++) printf("%c",b[i-1]);
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