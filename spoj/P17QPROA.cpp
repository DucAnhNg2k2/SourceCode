#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool BinarySearch(ll a[],int l,int r,ll x){
         while( l <= r ){
            ll m = (l+r)/2;
            if( a[m]== x ) return true;
            else if( a[m] > x ) {
                r = m-1;
            }
            else{
                l =  m+1;
            }
        }
    return false;
}
ll a[10000000];
int size = 0 ;
int main(){
    for(ll i = 0 ; i*i <= 1e10 ; i++ ){
        a[size] = i*i;
        size++;
    }
    int t;
    cin >> t;
    while( t-- ){
        ll n;
        cin >> n;
        set<ll> s;
        if( n == 1 ){
        	cout << 1 << endl;
        	continue;
		}
        for(ll i = 0 ; a[i] <= n/2 ; i++ ){
            if( BinarySearch(a,0,size-1,n-a[i])){
                s.insert(a[i]);
            }
            if( n-a[i] == 1 ) s.insert(-1);
        }
        cout << s.size() << endl;
    }
} 
