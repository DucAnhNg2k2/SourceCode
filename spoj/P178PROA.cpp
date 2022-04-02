#include<bits/stdc++.h>
using namespace std;
int dem(long long n){
    int dem = 0;
    while( n > 0 ){
        dem++;
        n/=10;
    }
    return dem;
}
int main(){
    long long n;
    while(true){
        cin >> n;
        if( n == 0 ) break;
        else
        {
            if( n < 1000000 ) n = n;
            else if( n <= 5000000) n = n*0.9;
            else n = n*0.8;
            cout << setprecision(dem(n)) << fixed << n << endl;
        }
    }
} 
