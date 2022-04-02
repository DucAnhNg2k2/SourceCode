#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
 
typedef long long ll;
typedef double db;
 
bool cmp(int a,int b){
	return a < b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   	ll n;
   	cin >> n;
   	ll a[n];
   	ll sum = 0 ;
   	FOR(0,n){
   		cin >> a[i];
   		sum += a[i];
	}
	if( sum&1 ) cout << sum ;
	else {
		ll min = 1e10 ;
		FOR(0,n){
			if( min > a[i] && a[i]%2 == 1 ) min = a[i];
		}
		cout << sum - min ;
	}
