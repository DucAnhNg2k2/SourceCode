#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , k ;
    cin >> n >> k ;
    long long a = 1;
    for(int i = 0 ; i < k ; i++ ) a*=10;
    long long gcd = __gcd(n,a);
    cout << (n/gcd)*a;
} 
