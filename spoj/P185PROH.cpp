// FORM 
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
typedef vector<ll> vll ;
typedef vector<int> vi ;
typedef map<ll,ll> mll ;
typedef map<string,int> msi ;
const ll mod = 1e9+7;
 
int main()
{
	ios_base::sync_with_stdio(0);
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int tmp = 0;
	for(int i = 0 , j = n-1 ; i <= j ; i++ , j-- ){
		if( s[i] != s[j] ) tmp++;
	}
	if( k < tmp ){
		cout << - 1;
		return 0;
	}
	if( n&1 ){
		for(int i = 0 , j = n-1 ; i <= j ; i++ , j-- ){
			if( i == j ){
				if( k >= 1 && s[i] !='9'){
					s[i] ='9';
					k--;
					break;
				}
			}
			if( s[i] == s[j] && s[i] !='9'){
				if( k >= tmp + 2 ){
					s[i] ='9';
					s[j] ='9';
					k -=2;
					continue;
				}
			}
			if( s[i] != s[j] ){
				if( k >= tmp + 1 ){
					if( s[i] =='9'){
						s[j] = '9';
						k--;
						tmp--;
					}
					else if( s[j] =='9'){
						s[i] ='9';
						k--;
						tmp--;
					}
					else{
						s[i] ='9';
						s[j] ='9';
						k-=2;
						tmp--;
					}
				}
				if( k == tmp ){
					int so1 = (int)(s[i]-'0');
					int so2 = (int)(s[j]-'0');
					int somax = max(so1,so2);
					char so = (char)(somax + '0');
					s[i] = so;
					s[j] = so;
					tmp--;
					k--;
				}
			}
		}
		cout << s ;	
	}
	else{
		for(int i = 0 , j = n-1 ; i <= j ; i++ , j-- ){
			if( s[i] == s[j] && s[i] !='9'){
				if( k >= tmp + 2 ){
					s[i] ='9';
					s[j] ='9';
					k -=2;
					continue;
				}
			}
			if( s[i] != s[j] ){
				if( k >= tmp + 1 ){
					if( s[i] =='9'){
						s[j] = '9';
						k--;
						tmp--;
					}
					else if( s[j] =='9'){
						s[i] ='9';
						k--;
						tmp--;
					}
					else{
						s[i] ='9';
						s[j] ='9';
						k-=2;
						tmp--;
					}
				}
				if( k == tmp ){
					int so1 = (int)(s[i]-'0');
					int so2 = (int)(s[j]-'0');
					int somax = max(so1,so2);
					char so = (char)(somax + '0');
					s[i] = so;
					s[j] = so;
					tmp--;
					k--;
				}
			}
		}
		cout << s ;	
	}
}     
