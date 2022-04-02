#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n , m , a;
    cin >> n >> m >> a;
    ll canh1, canh2;
    if( n%a == 0 ) canh1 = n*1.0/a;
    else canh1 = n*1.0/a+1;
    if( m%a == 0) canh2= m*1.0/a;
    else canh2 = m*1.0/a+1;
    cout << canh1*canh2;
} 
