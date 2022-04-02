#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
string Tru(string a,string b){
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
// nh??Â¢n s?¡Â»? l?¡Â»?n v?¡Â»?i 1 s?¡Â»? 1 ?????Â¡n v?¡Â»?
string Nhan(string a,int t){
    int nho = 0 ;
    string res = "";
    for(int i = a.length() - 1 ; i >= 0 ; i-- ){
        int so = (int)(a[i]-'0')*t + nho;
        res = (char)(so%10+'0') + res;
        nho = so/10;
     //   cout << so << " " << nho << " " << res << endl;
    }
    if( nho > 0 ) res = (char)(nho+'0') + res;
    return res;
}
string Tich(string a,string b){
	if( a.length() < b.length() ) swap(a,b);
    vector<string> v;
 
 
    // bi?¡ÂºÂ¿n ????¡ÂºÂ¿m d??Â¹ng ????¡Â»? th??Âªm s?¡Â»? 0 ????¡ÂºÂ±ng sau
    int dem = 0 ;
 
    for(int i = b.length() -1  ; i >=0 ; i-- ){
        // nh??Â¢n t?¡Â»Â« t?¡Â»Â«
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
ll mod(string s,ll c){
	ll sum = 0 ;
	for(int i = 0 ; i < s.length() ; i++ ){
		sum = sum*10 + (int)(s[i]-'0');
		sum %= c;
	}
	return sum;
}
string To_string(ll n){
	string res="";
	while( n > 0 ){
		res = (char)(n%10+'0') + res;
		n/=10;
	}
	return res;
}
void solve(){
	string a,b;
	ll c;
	cin >> a >> b >> c;
	ll p1 = mod(a,c);
	ll p2 = mod(b,c);
	string s = Tich(To_string(p1),To_string(p2));
	cout << mod(s,c) << endl;
}
int main(){
	int t;
	cin >> t;
	while( t-- ){
		solve();
	}
} 
