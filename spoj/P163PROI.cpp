#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a, b,c;
    cin >> a >> b >> c;
    ll c1 = 2*a+2*b;
    ll c2 = a+b+c;
    ll c3 = a+c+c+a;
    ll c4 = b+c+c+b;
    cout << min(c1,min(c2,min(c3,c4)));
} 
