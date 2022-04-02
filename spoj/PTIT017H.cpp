#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
ull SoHoanHao(ll n){
	ull sum = 0 ;
	for(ull i = 1 ; i <= sqrt(n) ; i++ ){
		if( n%i == 0 ){
			ull s1 = i;
			ull s2 = n*1.0/i;
			sum += s1 ;
			sum += s2 ;
		//	cout << i << ' ' << n/i << endl;
		}
	}
	ull h = sqrt(n);
	if( h*h == n ) sum -= h;
	return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
   // cin.tie(0);
    int t;
    cin >> t;
    while( t-- ){
    	ull n;
    	cin >> n;
    	ull tmp = n;
    	n = SoHoanHao(n);
    	if( 2*tmp == SoHoanHao(n) ) cout <<"YES\n";
    	else cout <<"NO\n";
	}
  
}    
