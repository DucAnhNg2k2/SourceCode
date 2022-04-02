#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0 ; i < n ; i++ ){
            cin >> a[i];
        }
        int dem = 0 ;
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            sum += a[i];
            if( sum <= k ) dem++;
            else break;
        }
        cout << dem << endl;
    }
} 
