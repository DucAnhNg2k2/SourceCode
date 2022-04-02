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
//   	cin.tie(0);
   while(true){
   	ll a;
   	cin >> a;
   	if( a == 0 ) break;
   	int dem = 1;
   	while( a!=1 ){
   		if( a&1){
   			a = a*3+1;
   			dem++;
		}
		else{
			a /=2;
			dem++;
		}
	   }
	   cout << dem << endl;
   }
} 
