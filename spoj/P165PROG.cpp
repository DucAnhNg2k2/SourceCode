#include<bits/stdc++.h>
using namespace std;
bool LonHon(string a,string b){
    if( a.size() < b.size() ) a = '0' + a;
    if( b.size() < a.size() ) b = '0' + b;
    if( a >= b ) return true;
    else return false; 
}
bool NhoHon(string a,string b){
    if( a.size() < b.size() ) a = '0' + a;
    if( b.size() < a.size() ) b = '0' + b;
    if( a <= b ) return true;
    else return false;
}
int main(){
    string n;
    cin >> n;
    if( LonHon(n,"-128") && NhoHon(n,"127") ) cout <<"byte";
    else if( LonHon(n,"-32768") && NhoHon(n,"32767") ) cout << "short";
    else if( LonHon(n,"-2147483648") && NhoHon(n,"2147483647")) cout << "int";
    else if( LonHon(n,"-9223372036854775808") && NhoHon(n,"9223372036854775808")) cout <<"long";
    else cout << "BigInteger";
} 
