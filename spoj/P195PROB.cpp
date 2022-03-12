#include<bits/stdc++.h>
using namespace std;
int s[150][150] = {0};
int main(){
    int n;
    cin >> n;
    for(int tmp = 0 ; tmp < n ; tmp++ ){
        int a,b,c;
        cin >> a >> b >> c;
        for(int i = a ; i < b ; i++ ){
            for(int j = 0 ; j < c ; j++){
                s[i][j] = 1;
            }
        }
    }
    int dem = 0 ;
    for(int i = 0 ; i < 150 ; i++ ){
        for(int j = 0 ; j < 150 ; j++ ){
            if( s[i][j] == 1 ) dem++;
        }
    }
    cout << dem;
} 
