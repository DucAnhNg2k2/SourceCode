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
	ll sum = 0 ;
	string s;
	cin >> s;
	FOR(0,s.size()){
		int dem = 0;
		if( s[i] == 'A' || s[i] == 'B' || s[i] =='C') dem =2;
		if( s[i] =='D' || s[i]=='E' || s[i]=='F') dem = 3;
		if( s[i]=='G' || s[i]=='H' || s[i]=='I' ) dem = 4;
		if( s[i]=='J' || s[i] =='K' || s[i]=='L') dem =5;
		if( s[i]=='M' || s[i]=='N' || s[i]=='O') dem =6;
		if( s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S') dem=7;
		if( s[i]=='T' || s[i]=='U' || s[i]=='V') dem =8;
		if( s[i]=='W' || s[i] =='X' || s[i]=='Y'|| s[i]=='Z') dem =9;
		sum = sum + dem + 1;
	}
	cout << sum;
}      
