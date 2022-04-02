#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
  	cin.tie(0);
    int n;
    cin >> n;
	ll a[n];
	FOR(0,n) cin >> a[i];
	if( n == 0 || n == 1 ){
		cout << 0 ;
		return 0;
	}
	else{
		int Min = INT_MAX;
		int Max = INT_MIN;
		int csmax;
		int csmin;
		FOR(0,n){
			if( Max <= a[i] ){
				Max = a[i];
				csmax = i;
			}
			if( Min >= a[i] ){
				Min = a[i];
				csmin = i;
			}
		}
			int h1 = n-1 - csmin ;
			int h2 = csmin ;
			int h3 = n-1 - csmax;
			int h4 = csmax;
			cout << max(h1,max(h2,max(h3,h4)));
		}
	} 
