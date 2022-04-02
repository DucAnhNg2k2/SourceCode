#include<bits/stdc++.h>
using namespace std;
bool sosanh(string a,string b){
    while( a.size() < b.size() ) a = '0' + a;
    while( b.size() < a.size() ) b = '0' + b;
    if( a > b ) return true;
    else return false;
}
main(){
    string s;
    cin >> s;
    if( s[0] =='-')
    {
        s.erase(0,1);
        string s1 = s;
        string s2 = s;
        string res;
        s1.erase(s.length()-1,1);
        s2.erase(s.length()-2,1);
        if( sosanh(s1,s2) ){
            res = '-'+ s2;
        }
        else res = '-' + s1;
        if( res[1] =='0' ) cout << 0;
        else cout << res;
    }
    else
    {
        cout << s;
    }
} 
