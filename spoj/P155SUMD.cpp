#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int BinarySearch(ll a[],int l,int r,ll x){
    ll ans = -1;
         while( l <= r ){
            ll m = (l+r)/2;
            if( a[m] > x ) r = m-1;
            else{
                ans = m;
                l = m+1;
            }
        }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    int n , m;
    cin >> n >> m;
    ll a[n] , b[m];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0 ; i < m ; i++ ){
        cin >> b[i];
        if( b[i] < a[0] ) cout << 0 << endl;
        else{
            ll t = BinarySearch(a,0,n-1,b[i]);
            cout << t + 1 << endl;
        }
    }
}  
