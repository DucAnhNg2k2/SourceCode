#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
 
void solve()
{	
	
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 	ll n ,m ;
 	cin >> n >> m;
 	int dem = 0 ;
 	FOR(i,0,1001){
 		FOR(j,0,1001){
 			ll x1 = i*i + j;
 			ll x2 = i + j*j;
 			if( x1 == n && x2 == m ) dem++;
		 }
	 }
	 cout << dem;
} 
