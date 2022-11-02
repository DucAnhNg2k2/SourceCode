#include<iostream>
using namespace std;
int test;
int n , a[100] , stop = 1;
 string s;
void KhoiTao(){
    for(int i = 1 ; i<= n ; i++ ){
        a[i] = (int)(s[i]-'0');
    }
}
void Xuat(){
    for(int i =1 ; i<= n ; i++){
        cout << a[i];
    }
    cout << endl;
}
void CT(){
    int i = n-1;
    while( i > 0 && a[i] >= a[i+1]) i--;
    if( i==0 ) cout << "BIGGEST" << endl;
    else{
        int k = n;
        while( a[i] >= a[k] ) k--;
        swap(a[k],a[i]);
        int r = i+1 , c = n;
        while( r < c){
            swap(a[r],a[c]);
            r++;
            c--;
        }
        Xuat();
    }
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        cin >> test >> s ; 
        n = s.length();
        s = '@' + s;
        KhoiTao();
        cout << test << ' ';
        CT();
    }
} 
