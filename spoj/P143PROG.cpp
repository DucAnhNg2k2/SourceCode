#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin >> n >> k;
    n--;
    int KeoTeo ;
    if( k%n == 0 ){
        KeoTeo = k*1.0/n - 1;
        cout << k+KeoTeo << ' ' << k+KeoTeo+1;
    }
    else{
        KeoTeo = k*1.0/n;
        cout << k+KeoTeo << ' ' << k+KeoTeo ;
    }
} 
