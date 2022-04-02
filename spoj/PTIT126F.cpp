#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int r = 0 ;
    int l = 0 ;
    int dem = 0 ;
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i] == 'L' ) l++;
        if( s[i] == 'R' ) r++;
        if( s[i] == '?' ) dem++;
    }
    cout << abs(l-r) + dem;
}
