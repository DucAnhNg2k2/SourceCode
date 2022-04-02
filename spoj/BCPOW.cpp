#include<bits/stdc++.h>
using namespace std;
string Cong_2_So_Nguyen_Lon(string a,string b){
    while( a.size() < b.size() ) a = '0' + a;
    while( b.size() < a.size() ) b = '0' + b;
    string res ="";
    int nho = 0 ;
    for(int i = a.size() -1 ; i >= 0 ; i-- ){
        int so = (int)(a[i]-'0')+ (int)(b[i]-'0') + nho;
        if( so >= 10 ){
            nho = 1;
            res = (char)(so-10+'0') + res;
        }
        else{
            nho = 0 ;
            res = (char)(so+'0') + res;
        }
    }
    if( nho == 1 ) res = '1' + res;
    return res;
}
int main(){
    int n , m;
    cin >> n >> m;
    string a = "2" , b = "3";
    for(int i = 2 ; i <= n ; i++ ){
    	a = Cong_2_So_Nguyen_Lon(a,a);
	}
	for(int i = 2 ; i <= m ; i++ ){
		string Luu = b;
		b = Cong_2_So_Nguyen_Lon(b,b);
		b = Cong_2_So_Nguyen_Lon(b,Luu);
	}
	cout << Cong_2_So_Nguyen_Lon(a,b)[0];
} 
