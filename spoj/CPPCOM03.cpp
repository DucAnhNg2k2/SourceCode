#include<bits/stdc++.h>
using namespace std;
int n;
int a[21];
bool chuaxet[21];
void Xuat(){
    for(int i = 1 ; i <= n ; i++ ) cout << a[i] ;
    cout << ' ';
}
void KhoiTao(){
    for(int i = 1 ; i <= 20 ; i++ ) chuaxet[i] = true;
}
void Try(int i){
    for(int j = 1 ; j <= n ; j++ ){
        if( chuaxet[j] ){
            a[i] = j;
            chuaxet[j] = false;
            if( i == n ) Xuat();
            else Try(i+1);
            chuaxet[j] = true;
        } 
    }
}
int main(){
    int t;
    cin >> t;
    while ( t-- )
    {
        /* code */
        cin >> n;
        KhoiTao();
        Try(1);
        cout << endl;
    }
    
}
 
