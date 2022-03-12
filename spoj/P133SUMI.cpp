#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.length();
    int r,c;
    for( r = n ; r >= 1 ; r-- ){
        if( n%r == 0 ){
            c = n/r;
            if( r <= c ) break;
        }
    }
    int size = 0;
    char a[r][c];
    for(int i = 0 ; i < c ; i++ ){
        for(int j = 0 ; j < r ; j++ ){
            a[j][i] = s[size];
            size++; 
        }
    }
    for(int i = 0 ; i < r ; i++ ){
        for(int j = 0 ; j < c ; j++ ){
            cout << a[i][j];
        }
    }
} 
