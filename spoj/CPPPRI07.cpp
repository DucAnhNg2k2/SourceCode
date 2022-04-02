#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(){
    ll n;
    cin >> n;
    map<ll,ll> m;
    for(int i = 2 ; i <= sqrt(n) ; i++ ){
        while( n%i == 0 ){
            n /=i;
            m[i]++;
        }
    }
    if( n > 1 ) m[n]++;
    if( m.size() != 3 ) return 0;
    else{
        for(map<ll,ll>::iterator i = m.begin() ;i != m.end() ; i++ ){
            if( (*i).second > 1 ) return 0;
        }
        return 1;
    }
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        cout << check() << endl;
    }
} 
