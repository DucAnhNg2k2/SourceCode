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
string Tru(string a,string b){
    if( a == b ){
		return "0";
	}
	string res="";
	while( a.size() < b.size() ) a = '0'+a;
    while( b.size() < a.size() ) b = '0'+b;
	if( a < b ){
		swap(a,b);
	}
	int nho = 0;
	for(int i = a.length() -1 ; i >= 0 ; i-- ){
			int so = (int)(a[i]-'0') - (int)(b[i]-'0') - nho;
			if( so < 0 ){
				res = (char)(so+10+'0') + res;
				nho = 1;
			}
			else{
				res = (char)(so+'0') + res;
				nho = 0;
			}
	}
	return res;
}
void solve(){
	string s1, s2;
	cin >> s1 >> s2;
	cout << Tru(s1,s2) << endl;
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
