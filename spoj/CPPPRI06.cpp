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
// sang nguyen to
vector<bool> mark(1e6+1,0);
void sangnt(){
    mark[0] = 1;
    mark[1] = 1;
    for(int i = 2 ; i*i <= 1e6 ; i++ ){
        if( !mark[i] ){
            for(int j = i*i ; j <= 1e6 ; j+=i ){
                mark[j] = 1;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    sangnt();
    ll a[10000];
    int size = 0;
    for(int i = 2 ; i <= 1e6, size < 10000 ; i++ ){
        if( mark[i] == false ){
            a[size] = i;
            size++;
        }
    }
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        for(int i = 2 ; i <= n ; i++ ){
            if( mark[i] == false ){
                if( BinarySearch(a,0,size,n-i) == true ){
                    cout << i << ' ' << n-i << endl;
                    break;
                }
            }
        }
    }
} 
