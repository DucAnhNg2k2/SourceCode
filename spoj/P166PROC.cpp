#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char s[n][n];
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            cin >> s[i][j];
        }
    }
    int dem = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++){
            if( s[i][j] =='C'){
                for(int cs = j+1 ; cs < n ; cs++ ){
                    if( s[i][cs] == 'C' ) dem++;
                }
                for(int cs = i+1 ; cs < n ; cs++ ){
                    if( s[cs][j] =='C') dem++;
                }
            }
        }
    }
    cout << dem;
} 
