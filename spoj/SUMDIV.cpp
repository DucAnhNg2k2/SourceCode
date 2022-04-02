#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    long long n;
    cin >> n;
    long long sum = 0;
    for(int i = 1 ; i <= sqrt(n) ;i++){
        if( n%i==0){
            sum += i;
            sum += n/i;
        }
    }
    long long h = sqrt(n);
    if( h*h == n) cout << sum - h << endl;
    else cout << sum << endl;
    }
} 
