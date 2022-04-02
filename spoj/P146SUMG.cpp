#include<bits/stdc++.h>
using namespace std;
int main(){
    int r , c , a , b;
    cin >> r >> c >> a >> b;
    char s[r][c];
    for(int i = 0 ; i < r ; i++ ){
        for(int j = 0 ; j < c ; j++ ){
            cin >> s[i][j];
        }
    }
    for(int i = 0 ; i < r ; i++ ){
        for(int z = 1 ; z <= a ; z++ ){
            for(int j = 0 ; j < c ; j++){
                for(int k = 1 ; k <= b ; k++ ) cout << s[i][j];
            }
            cout << endl;
        } 
    }
} 
