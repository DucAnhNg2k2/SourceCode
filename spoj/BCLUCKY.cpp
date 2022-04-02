#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , x;
    cin >> n >> x;
    long long a[n];
    long long max = 0;
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
        if( max < a[i] ) max =a[i];
    }
    int dem = 0 ;
    for(int i = 0 ; i < n ; i++){
        if ( a[i] != max ) dem++;
    }
    cout << x*n -(n-dem)*max;
} 
