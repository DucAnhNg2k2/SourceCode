#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin >> r >> c;
    char a[r][c];
    for(int i = 0 ; i < r ; i++ ){
        for(int j = 0 ; j < c ; j++ ){
            cin >> a[i][j];
        }
    }
    int dem = 0 ;
    for(int i = 0 ; i < r ; i++ ){
        for(int j = 0 ; j < c ; j++ ){
            if( a[i][j] == '#' ){
                dem++;
                a[i][j] ='.';
                if( a[i][j+1] == '#'){
                    a[i][j+1] ='.';
                    continue;
                }
                if( a[i+1][j] == '#'){
                    a[i+1][j] ='.';
                }
            }
        }
    }
    cout << dem;
} 
