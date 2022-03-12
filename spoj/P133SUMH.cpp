#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    while( s.length()%3 !=  0 ){
        s = '0' + s;
    }
    for(int i = 0 ; i < s.length()-2 ; i+=3 ){
        string res="";
        res = res+s[i];
        res = res+s[i+1];
        res = res+s[i+2];
        if( res =="000") cout << 0;
        if( res =="001") cout << 1;
        if( res =="010") cout << 2;
        if( res =="011") cout << 3;
        if( res =="100") cout << 4;
        if( res =="101") cout << 5;
        if( res =="110") cout << 6;
        if( res =="111") cout << 7; 
    }
} 
