#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    int y = 0 ;
    int n = 0 ;
    int p = 0 ;
    int a = 0 ;
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i] == 'Y' ) y++;
        if( s[i] == 'N' ) n++;
        if( s[i] == 'P' ) p++;
        if( s[i] == 'A' ) a++;
    }
    if( a >= s.length()*1.0/2 ) return "need quorum";
    else{
        if( y > n ) return "yes";
        else if( y < n ) return "no";
        else return "tie";
    }
}
int main(){
    while(true){
        string s;
        cin >> s;
        if( s.length() == 1 && s[0] =='#' ) break;
        cout << solve(s) << endl;
    }
} 
