#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
int dem(string s){
	FOR(0,s.length()) if(s[i]=='_') s[i]=' ';
	int dem = 0 ;
	while(s[0]==' ') s.erase(0,1);
	s = s + ' ';
	FOR(0,s.length()){
		if( s[i] !=' ' && s[i+1] ==' ') dem++;
	}
	return dem;
}
void solve(){
	string s;
	cin >> s;
	bool ok = false;
	int max= 0;
	int demN = 0 ;
	FORR(i,0,s.length()){
		if( s[i] == '('){
			i++;
			string res ="";
			while( s[i] != ')'){
				res = res + s[i];
				i++;
			}
			demN += dem(res);
		}
		if( s[i] == ')'){
			ok = false;
			continue;
		}
		if( ok == false ){
			int dem = 0 ;
			FORR(j,i,s.length()){
				if( s[j] != '_' && s[j] !='(' && s[j] != ')') dem++;
				if( s[j] == '_' || s[j] =='(' || s[j] ==')'){
					if( max < dem ) max = dem;
					break;
				}
				if( max < dem ) max = dem;
			}
		}
	}
	cout << max << ' ' << demN << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin >> t;
  	while( t-- ){
  		solve();
	}
}  
