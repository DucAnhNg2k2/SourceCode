#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , x;
    cin >> n >> x;
    int dem = 0 ;
    for(int i = 1 ; i <= n ; i++ ){
        if( x%i == 0 ){
            long long t = x*1.0/i;
            if( t <= n ) dem++;
        }
    }
    cout << dem;
} 
