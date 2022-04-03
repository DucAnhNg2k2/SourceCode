#include<stdio.h>
typedef long long ll;
const ll mod = 1e9+7;
struct House{
    int k;
    int x;
};
typedef struct House House;
int main(){
    int n ,m;
    scanf("%d%d",&n,&m);
    struct House h[n+1];
    ll keo = 1;
    for(int i = 1 ; i<= n ; i++) scanf("%d%d",&h[i].k,&h[i].x);
    ll heso = 1;
    ll tong = 0;
    for(int i = 1 ; i<=n ; i++ ){
        if( h[i].k == 1 ){
        	tong = (tong%mod + h[i].x%mod)%mod;
		}
		if( h[i].k == 2){
			tong = (tong%mod *h[i].x%mod)%mod;
			heso = (heso%mod*h[i].x%mod)%mod;
		}
    }
    	keo = ((heso*keo)%mod + tong%mod)%mod;
    for(int i = 1 ; i <= m ; i++){
    	keo = ((heso*keo)%mod + tong%mod)%mod;
	}
	printf("%lld",keo);
}  
