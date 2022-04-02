#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 0 ; i < s.length() ; i++ ){
        if( s[i] == '1'){
            ok = true;
        }
        else if( s[i] == '4'){
            if( s[i-1] =='1' || (s[i-1]=='4' && s[i-2] =='1') ) continue;
            else{
                ok = false;
                break;
            }
        }
        else{
            ok = false;
            break;
        }
    }
    if( ok ) cout <<"YES";
    else cout <<"NO";
} 
