#include<bits/stdc++.h>
using namespace std;
string Tong(string a,string b){
    string res="";
	while( a.size() < b.size() ) a = '0'+a;
    while( b.size() < a.size() ) b = '0'+b;
	int nho = 0;
	for(int i = a.length() -1 ; i >= 0 ; i-- ){
		int so = (int)(a[i]-'0')+(int)(b[i]-'0') + nho;
		res = (char)(so%10+'0') + res;
		nho = so/10;
	}
	if( nho == 1 ) res = '1'+res;
	return res;
}
string Nhan(string a,int t){
    int nho = 0 ;
    string res = "";
    for(int i = a.length() - 1 ; i >= 0 ; i-- ){
        int so = (int)(a[i]-'0')*t + nho;
        res = (char)(so%10+'0') + res;
        nho = so/10;
    }
    if( nho > 0 ) res = (char)(nho+'0') + res;
    return res;
}
string NHAN(string a,string b){
	if( a.length() < b.length() ) swap(a,b);
    vector<string> v;
    int dem = 0 ;
    for(int i = b.length() -1  ; i >=0 ; i-- ){
        int t= (int)(b[i]-'0');
        string s = Nhan(a,t);
        int c = dem;
        while( c > 0 ){
            s += '0';
            c--;
        }
        dem++;
        v.push_back(s);
    }
    string res = "";
    for(int i = 0 ; i < v.size() ; i++ ){
        res = Tong(res,v[i]);
    }
    while(res[0] == '0' && res.length() > 1) res.erase(0,1);
	return res;
}
string To_string(int n){
	string res ="";
	while( n > 0 ){
		res = (char)(n%10+'0') + res;
		n/=10;
	}
	return res;
}
void solve(){
	int n , x;
	cin >> n >> x;
	string s="1";
	for(int i = 2 ; i <= n ; i++ ){
		string res = To_string(i);
		s = NHAN(s,res);
	}
	char t = (char)(x+'0');
	int dem = 0;
	for(int i = 0 ; i < s.length() ; i++){
			if( s[i] == t) dem++;
	}
	cout << dem << endl;
}
int main(){
    int t;
	cin >> t;
	while( t-- ){
		solve();
	}
}  
