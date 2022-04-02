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
void solve(string s){
    bool so0 = false;
    bool so1 = false;
    bool so2 = false;
    bool so3 = false;
    bool so4 = false;
    bool so5 = false;
    bool so6 = false;
    bool so7 = false;
    bool so8 = false;
    bool so9 = false;
    string tmp = s;
    for(int i = 1 ;  ; i++ ){
        s = Nhan(tmp,i);
         for(int j = 0 ; j < s.length() ; j++ ){
             if( s[j] =='0') so0 = true;
             if( s[j] =='1') so1 = true;
             if( s[j] =='2') so2 = true;
             if( s[j] =='3') so3 = true;
             if( s[j] =='4') so4 = true;
             if( s[j] =='5') so5 = true;
             if( s[j] =='6') so6 = true;
             if( s[j] =='7') so7 = true;
             if( s[j] =='8') so8 = true;
             if( s[j] =='9') so9 = true;
         }
         if( so0 == true && so1 == true && so2==true && so3 == true && so4 == true && so5==true &&so6==true && so7==true && so8==true && so9 == true){
             cout << i << endl;
             return ;
         }
    }
}
int main(){
	string s;
   	while( cin >> s ){
   		solve(s);	
	}
} 
