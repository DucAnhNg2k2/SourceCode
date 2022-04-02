#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
bool FullAm(ll a[],ll n){
	FOR(0,n){
		if( a[i] >=0 ) return false;
	}
	return true;
}
bool FullDuong(ll a[],int n){
	FOR(0,n){
		if( a[i] < 0 ) return false;
	}
	return true;
}
bool cmp(ll a,ll b){
	return a > b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    // cin.tie(0);
   	int n;
   	cin >> n;
   	ll a[n];
   	FOR(0,n) cin >> a[i];
   	if( FullAm(a,n) ){
   		sort(a,a+n,cmp);
		cout << a[0] << ' ' << a[0] ;	
		return 0;
	}
	if( FullDuong(a,n) ){
		ll sum = 0 ;
		FOR(0,n) sum += a[i];
		cout << sum << ' ' << sum ;
		return 0;
	}
   	ll sum1 = 0 ;
   	ll max = 0;
   	FOR(0,n){
   		sum1 += a[i];
   		if( max < sum1 ) max = sum1 ;
		if( sum1 < 0 ){
			if( max < sum1 ) max = 0;
			sum1 = 0;
		}	
	}
	sum1 = max ;
	ll sum2 = 0 ;
	FOR(0,n){
		if( a[i] >= 0 ) sum2 += a[i];
	}
	cout << sum1 << ' ' << sum2 ;
}  
