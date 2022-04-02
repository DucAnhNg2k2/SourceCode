#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while( t-- ){
        ll a;
        cin >> a;
        a %= 360;
        ll tuso = a;
        ll mauso = 180;
        if( tuso == 0 ){
            cout << 0 << '$' << endl;
        }
        else{
            ll gcd = __gcd(tuso,mauso);
            tuso /=gcd;
            mauso /=gcd;
            if( tuso != 1 ) cout << tuso ;
            cout << "$";
            if(mauso != 1 ) cout << '/' << mauso;
            cout <<'\n'; 
        }
      
    }
} 
