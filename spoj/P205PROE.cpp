#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
 
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
	int n;
	cin >> n;
	char s1[n] , s2[n];
	FOR(0,n) cin >> s1[i];
	FOR(0,n) cin >> s2[i];
	int dem = 0 ;
	FOR(0,n){
		int so1 = (int)(s1[i]-'0');
		int so2 = (int)(s2[i]-'0');
		int k = abs(so1-so2);
		k = min(k,10-k);
		dem += k;
	}
	cout << dem ;
}      
