// FORM 
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
main()
{
	// 
   ios_base::sync_with_stdio(0);
//   	cin.tie(0);
	ll n;
	cin >> n;
	ll a[n]; 
	FOR(0,n){
	 cin >> a[i];
	}
	sort(a,a+n);
	ll min1 = a[0];
	ll min2 = a[1];
	ll min3 = a[2];
	ll dem1 = 0 ,dem2 = 0 ,dem3 = 0;
	FOR(0,n){
		if( a[i] == min1 ) dem1++;
		if( a[i] == min2 ) dem2++;
		if( a[i] == min3 ) dem3++;
	}
	if( min1 == min2 && min2 == min3 ){
		cout << dem1*(dem1-1)*(dem1-2)/6;
		return 0;
	}
	if( min1 != min2 && min2 != min3 && min3!= min1){
		cout << dem3;
		return 0;
			// 1 2 3 3
	}
 
	if( min1 == min2 && min2 != min3 ){
		// 1 1 2 2 
		cout << dem3;
		return 0;
	}
	if( min1 != min2 && min2 == min3 ){
		// 1 2 2 2 3 4 5
		cout << dem2*(dem2-1)/2;
	} 
	// n*(n-1)/2
	// n*(n-1)*(n-2)/6
}     
 
// DANG HIEP + DUC ANh
