#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[4][4];
    for(int i = 0 ; i < 4 ; i++ ){
        for(int j = 0 ; j < 4 ; j++ ){
            cin >> s[i][j];
        }
    }
    bool ok = false;
    for(int i = 0 ; i < 4 ; i++ ){
        for(int j = 0 ; j < 4 ; j++ ){
            if( s[i][j] =='.'){
                int dem = 0 ;
                if( s[i][j+1] =='.') dem++;
                if( s[i+1][j] == '.') dem++;
                if( s[i+1][j+1] =='.') dem++;
                if( dem >=2 ){
                    ok = true;
                }
            }
            if( s[i][j] =='#'){
                int dem = 0 ;
                if( s[i][j+1] =='#') dem++;
                if( s[i+1][j] == '#') dem++;
                if( s[i+1][j+1] =='#') dem++;
                if( dem >=2 ){
                    ok = true;
                }
            }
        }
    }
    if( ok ) cout << "YES";
    else cout << "NO";
} 
