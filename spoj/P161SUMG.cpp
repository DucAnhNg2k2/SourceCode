#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int s = a + b + c + d + e;
    if( s%5 == 0 && s > 0 ) cout << s*1.0/5;
    else cout << -1;
} 
