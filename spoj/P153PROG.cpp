#include<bits/stdc++.h>
 
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
 
using namespace std;
 
typedef long long ll;
typedef double db;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n , k;
    cin >> n >> k;
   	if( n%2 == 0 ){
   		if( k <= n/2  ){
   			k = 1 + (k-1)*2;
		}
		else{
			k = k - n/2 ;
			k = 2 + (k-1)*2;
		}	
	}
	else{
		n++;
		if( k <= n/2  ){
   			k = 1 + (k-1)*2;
		}
		else{
			k = k - n/2;
			k = 2 + (k-1)*2;
		}
	}
	cout << k;
}  
