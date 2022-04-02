// FORM 
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
	char s[100][100];
	FORR(i,0,100){
		FORR(j,0,100) s[i][j] ='#';
	}
  	int r , c;
  	cin >> r >> c;
  	for(int i = 1 ; i <= r ; i++ ){
  		for(int j = 1 ; j <= c ; j++ ) cin >> s[i][j];
	}
	string min = "zzzzzzzzzzzzzzzzzzz";
	for(int i = 1 ; i <= r;  i++ ){
		for(int j = 1 ; j <= c ; j++ ){
			// s[i][j]	
			string s1 = "";
			string s2 = "";
			for(int tmp = j ; tmp <= c , s[i][tmp] !='#' ; tmp++ ) s1 = s1 + s[i][tmp];
			for(int tmp = j-1 ; tmp >= 1 , s[i][tmp] !='#' ; tmp-- ) s1 = s[i][tmp] + s1;
			for(int tmp = i ; tmp <= r , s[tmp][j] !='#' ; tmp++ ) s2 = s2 + s[tmp][j];
			for(int tmp = i-1 ; tmp >= 1 , s[tmp][j] !='#' ; tmp-- ) s2 = s[tmp][j] + s2;
			if( min > s1 && s1.size() >= 2 ) min = s1;
			if( min > s2 && s2.size() >= 2 ) min = s2;
	//		cout << s1 << ' ' << s2 << endl;
		}
	}
	cout << min ;
}      
