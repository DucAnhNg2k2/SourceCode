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
// nh?¢n sá»? lá»?n vá»?i 1 sá»? 1 Ä?Æ¡n vá»?
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
string NHAN(string a,string b){
	if( a.length() < b.length() ) swap(a,b);
    vector<string> v;
 
 
    // biáº¿n Ä?áº¿m d?¹ng Ä?á»? th?ªm sá»? 0 Ä?áº±ng sau
    int dem = 0 ;
 
    for(int i = b.length() -1  ; i >=0 ; i-- ){
        // nh?¢n tá»« tá»«
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
int main(){
	    ios_base::sync_with_stdio(false); cin.tie(NULL);   
    string a,b;
    cin >> a >> b;
    cout << Tong(a,b) << '\n' << Tru(a,b) << '\n' << NHAN(a,b);
} 
