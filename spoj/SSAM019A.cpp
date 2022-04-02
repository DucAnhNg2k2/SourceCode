#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// test 264600 = 2^3.3^3.5^2.7^2
// ( so 3 co 4 cach chon so 5 co 3 cach chon so 7 co 3 cach chon )*cs2 
void solve(){
    ll n;
    cin >> n;
    if( n == 2 ){
        cout << 1 << endl;
        return ;
    }
    int dem2 = 0 ;
    for(int i = 2 ; i <= sqrt(n) ; i++ ){
    	int dem = 1;
        while( n%i == 0 && i%2 ==0 ){
            dem2++;
            n/=i;
        }
        while( n%i == 0 ){
        	dem++;
        	n/=i;
		}
		dem2 *= dem;
    }
    if( n > 1 ){
       dem2 *=2;
    }
    cout << dem2 << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        solve();
    }
} 
