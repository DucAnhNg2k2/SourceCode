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
	int a[n];
	FOR(0,n) cin >> a[i];
	int sum = 0 ;
	FOR(0,n){
		if( a[i] == 1 ) sum++;
	}
	if( sum == n ){
		cout << sum - 1 ;
		return 0 ;
	}
	int max = 0 ;
	for(int i = 0 ; i < n ; i++ ){
		int dem = 0 ;
		for(int j = i ; j < n ; j++ ){
			if( a[j] == 0 ) dem++;
			else dem--;
			if( max < dem ) max = dem ;
		}
	}
	cout << max + sum  ;
}      
