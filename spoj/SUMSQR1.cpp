#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
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
     //   cout << so << " " << nho << " " << res << endl;
    }
    if( nho > 0 ) res = (char)(nho+'0') + res;
    return res;
}
string Tich(string a,string b){
	if( a.length() < b.length() ) swap(a,b);
    vector<string> v;
 
 
    // biáº¿n �??áº¿m d�?¹ng �??á»? th�?ªm sá»? 0 �??áº±ng sau
    int dem = 0 ;
 
    for(int i = b.length() -1  ; i >=0 ; i-- ){
        // nh�?¢n tá»« tá»«
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
void solve(int n)
{
	
}
int a[1000000];
int size = 0 ;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string n;
    cin >> n;
    string s1 = n;
	string s2 = Tong(n,"1");
	string s3 = Tong(Nhan(n,2),"1");
	string res = Tich(s1,Tich(s2,s3));
//	cout << res;
	string s ="";
	ll sum = 0 ;
	for(int i = 0 ; i < res.length() ; i++ ){
		sum = sum*10 + (int)(res[i]-'0');
		int t = sum/6;
		sum %=6;
		a[size] = t;
		size++;
	}
	int cs;
	for(int i = 0 ; i < size ; i++ ){
		if( a[i] != 0 ){
			cs = i ;
			break;
		}
	}
	for(int i = cs ; i < size ; i++ ) cout << a[i] ;
} 
