#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
    cin >> s;
    string a = s;
    string b = s + "0000";
    while( a.size() < b.size() ) a = '0'+ a;
    int len = a.size() - 1;
    int nho = 0 ;
    string res = "";
    for(int i = len ; i >= 0 ; i-- ){
        int so = (int)(a[i]-'0') + (int)(b[i]-'0') + nho;
        if( so >=2 ){
            nho = 1;
            res = (char)(so-2+'0') + res;
        }
        else{
            nho = 0;
            res = (char)(so+'0') + res;
        }
    }
    if( nho == 1 ) res = '1' + res;
    cout << res;
}
 
