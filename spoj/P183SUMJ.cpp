#include<bits/stdc++.h>
using namespace std;
bool check(int b[],int m,int x){
    for(int i = 0 ; i < m ; i++ ){
        if( b[i] == x ) return true;
    }
    return false;
}
int main(){
    int n , m;
    cin >> n >> m;
    int a[n] , b[m];
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    for(int i = 0 ; i < m ; i++ ) cin >> b[i];
    for(int i = 0 ; i < n ; i++ ){
        if( check(b,m,a[i]) ){
            cout << a[i] << ' ';
        }
    }
} 
