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
   	ll n ;
   	cin >> n;
   	map<ll,ll> m;
   	for(int i = 2 ; i <= sqrt(n) ; i++ ){
   			while( n%i ==0 ){
   				n/=i;
				m[i]++;	
		}	
	}
	if( n > 1 ) m[n]++;
	for(map<ll,ll>::iterator i = m.begin() ; i!= m.end() ; i++ ){
		(*i).second = (*i).second*2 + 1;
	}
	ll s = 1;
	for(map<ll,ll>::iterator i = m.begin() ; i!= m.end() ; i++ ){
		s = s*(*i).second;
	}
	cout << s;
}   
