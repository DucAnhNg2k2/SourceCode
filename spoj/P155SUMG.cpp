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
    // cin.tie(0);
  
  	// le =  <--> so phan tu le la le 
  	int n , m;
  	cin >> n >> m;
  	int s = min(n,m);
  	if( s&1 ) cout << "Xavi";
  	else cout << "Wilshere";
}  
