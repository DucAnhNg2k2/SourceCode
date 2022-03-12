#include<bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
bool cmp(int a,int b){
	return a > b;
}
bool check1(int a[],int n){
	int dem = 0;
	FOR(0,n) if( a[i] >=2 ) dem++;
	if( dem >= 2 ) return true;
	return false;
}
bool check2(int a[],int n){
	FOR(0,n) if( a[i] >=4 ) return true;
	return false;
}
void solve(){
	int n;
	cin >> n;
	int a[n];
	FOR(0,n) cin >> a[i];
	int dd[105] = {0};
	FOR(0,n){
		dd[a[i]]++;
	}
	sort(dd,dd+105,cmp);
	int dem = 0 ;
	while( check1(dd,105) ){
		while( dd[0] >=2  && dd[1] >= 2){
			dd[0] -= 2;
			dd[1] -= 2;
			dem++;
		}
		sort(dd,dd+105,cmp);
	}
	while( check2(dd,105) ){
		while( dd[0] >= 4 ){
			dd[0] -=4;
			dem++;
		}
	}
	cout << dem << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
//   	cin.tie(0);
	int t;
	cin >> t;
	while( t-- ){
		solve();
	}
}       
