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
	string s;
	cin >> s;
	ll sum = 0 ;
	for(int i = 0 ; i < s.length() ; i++ ){
		int so = (int)(s[i]-'0');
		if( so%4 == 0 ) sum++;
	}
		for(int i = 0 ; i < s.length()-1 ;i++ ){
			int so1 = (int)(s[i]-'0');
			int so2 = (int)(s[i+1]-'0');
			int so = so1*10 + so2 ;
			if( so%4 == 0 ){
				sum += i+1;
			}
		}
	cout << sum ;
} 
