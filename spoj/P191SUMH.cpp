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
	int n;
	cin >> n;
	char s[100][100] = {0};
	for(int i = 0 ; i < 100 ; i++ ){
		for(int j = 0 ; j < 100 ; j++ ){
			s[i][j] = '#';
		}
	}
	for(int i = 1 ; i <= n ; i++ ){
		for(int j = 1 ; j <= n ; j++ ){
			cin >> s[i][j];
		}
	}
	for(int i = 1 ; i <= n ; i++ ){
		for(int j =1 ; j <= n ; j++ ){
			if( s[i][j] == '.'){
				if( s[i][j+1] == '.' && s[i][j-1] =='.' && s[i+1][j] =='.' && s[i-1][j] =='.'){
					s[i][j] ='#';
					s[i][j+1] ='#';
					s[i][j-1] ='#';
					s[i+1][j] ='#';
					s[i-1][j] ='#';
				}
			}
		}
	}
	for(int i = 0 ; i < 100 ; i++ ){
		for(int j = 0 ; j < 100 ; j++ ){
			if( s[i][j] =='.'){
				cout <<"NO";
				return 0;
			}
		}
	}
	cout << "YES";
}       
