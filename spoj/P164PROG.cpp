#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
ll sum(ll n){
	return n*(n+1)/2;
}
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
	ll n;
	cin >> n;
	int dem = 0 ;
	int start = 1 ;
	while( n >= sum(start) ){
		n -= sum(start);
		start++;
		dem++;
	}
	cout << dem ;
}      
