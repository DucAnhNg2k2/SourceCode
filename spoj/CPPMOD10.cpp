#include<stdio.h>
typedef long long ll;
const ll mod = 1e9+7;
ll POW(ll a,ll n){
    if( n == 0 ) return 1;
    if( n == 1 ) return a%mod;
    else{
        ll p = POW(a,n/2)%mod;
        if( n%2 == 0 ) return (p*p)%mod;
        else return ((p*p)%mod* a%mod)%mod;
    }
}
void solve(){
    int n , x;
    scanf("%d %d",&n,&x);
    int a[n];
    for(int i = 0 ; i < n ; i++ ){
        scanf("%d",&a[i]);
    }
    int somu = n-1;
    ll sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        ll p =  ( a[i]%mod * POW(x,somu) )%mod ;
        somu--;
        sum += p;
    }
    printf("%lld\n",sum%mod);
}
int main(){
    int t;
    scanf("%d",&t);
    while( t-- ){
        solve();
    }
    
}
