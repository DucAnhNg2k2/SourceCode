#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n , m;
    cin >> n >> m ;
    int a[n];
    int dem1 = 0 ;
    int dem_1 = 0;
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
        if( a[i] == 1 ) dem1++;
        else dem_1++;
    }
    while( m-- ){
        int l,r;
        cin >> l >> r;
        int h = r - l + 1;
        if( h%2 == 1 ) cout << 0 << endl;
        else{
            if( dem1 >= h/2 && dem_1 >= h/2 ) cout << 1 << endl;
            else cout << 0 << endl; 
        }
    }
} 
