#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
bool cmp1(int a,int b){
	return a > b;
}
bool cmp2(int a,int b){
	return a < b;
}
void solve(){
	int n;
	cin >> n;
	ll a[n];
	ll b[n];
	FOR(0,n){
		cin >> a[i];
		b[i] = a[i];
	}
	int dem = 0 ;
	sort(a,a+n,cmp1);
	sort(b,b+n,cmp2);
	for(int i = 0 , j = 0 ; ; ){
		cout << a[i] << ' ';
		i++;
		dem++;
		if( dem == n  ) break;
		cout << b[j] << ' ';
		j++;
		dem++;
		if( dem == n  ) break;
	}
	cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
  //  cin.tie(0);
    int t;
    cin >> t;
    while( t-- ){
    	solve();
	}
}   
