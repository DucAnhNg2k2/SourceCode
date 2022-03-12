#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    while( s.size() %3 !=0 ) s = '0'+s;
    string res = "";
    for(int i = 0 ; i <= s.length() -1 -2 ; i += 3){
        string test="";
        test += s[i];
        test += s[i+1];
        test += s[i+2];
        if( test == "000") res += '0';
        if( test == "001") res += '1';
        if( test == "010") res += '2';
        if( test == "011") res += '3';
        if( test == "100") res += '4';
        if( test == "101") res += '5';
        if( test == "110") res += '6';
        if( test == "111") res += '7';
    }
    cout << res;
} 
