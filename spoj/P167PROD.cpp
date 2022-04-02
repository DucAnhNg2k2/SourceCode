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
string Hieu(string a,string b){
    if( a == b ){
		return "0";
	}
	string res="";
	while( a.size() < b.size() ) a = '0'+a;
    while( b.size() < a.size() ) b = '0'+b;
	bool OkMin = false;
	if( a < b ){
		swap(a,b);
		OkMin = true;
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
	while(res[0]=='0') res.erase(0,1);
	if( OkMin ){
		res = '-' + res;
		return res;
	} 
	else return res;
}
bool check(string s){
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i] =='?') return true;
    }
    return false;
}
int main(){
    string a,b,c;
    cin >> a >> b >> c;
    if( check(a) ){
        string s = Hieu(c,b);
        for(int i = 0 ; i < a.length() ; i++ ){
            if( a[i] =='?') cout << s[i];
        }
    }
    if( check(b) ){
        string s = Hieu(c,a);
        for(int i = 0 ; i < b.length() ; i++ ){
            if( b[i] =='?') cout << s[i];
        }
    }
    if( check(c) ){
        string s = Tong(a,b);
        for(int i = 0 ; i < c.length() ; i++ ){
            if( c[i] =='?') cout << s[i];
        }
    }
} 
