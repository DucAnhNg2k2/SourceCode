#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , a[100] ;
void Xuat(){
    for(int i = 1 ; i <= n ; i++ ){
        cout << a[i];
    }
    cout << ' ';
}
void Try(int i){
    for(int j = 0 ; j <= 1 ; j++ ){
        a[i] = j;
        if( i== n ) Xuat();
        else Try(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        cin >> n;
        Try(1);
        cout << endl;
    }
} 
