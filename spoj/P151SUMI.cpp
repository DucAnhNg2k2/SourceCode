#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    int doi1 = 0;
    int doi2 = 0;
    string s1;
    string s2;
    bool S1 = false;
    bool S2 = false;
    while( t-- ){
        cin >> s;
        if( S1 == false ){
            s1 = s;
            doi1++;
            S1 = true;
            continue;
        }
        if( S2 == false ){
            s2 = s;
            doi2++;
            S2 = true;
            continue;
        }
        if( s1 == s) doi1++;
        if( s2 == s) doi2++;
    }
    if( doi1 > doi2 ) cout << s1;
    else cout << s2;
} 
