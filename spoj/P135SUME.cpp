#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[8];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7];
    bool checkGiam = false;
    bool chekTang = false;
    for(int i = 0 ; i < 7 ; i++ ){
        if( a[i] < a[i+1] ) checkGiam = true;
        if( a[i] > a[i+1] ) chekTang = true;
    }
    if( checkGiam == false ) {
        cout << "descending";
    }
    else if( chekTang == false ){
        cout << "ascending";
    }
    else cout << "mixed";
}
