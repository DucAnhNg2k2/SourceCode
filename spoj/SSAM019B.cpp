#include"stdio.h"
typedef long long ll;
void QuickSort(ll a[],int l ,int r){
	int i = l;
	int j = r;
	ll p = a[(l+r)/2];
	while( i < j){
		while(a[i] < p ) i++;
		while(a[j] > p) j--;
		if(i<=j){
			ll t = a[i];
			a[i]= a[j];
			a[j] = t;
			i++;
			j--;
		}
	}
	if(i < r) QuickSort(a,i,r);
	if(j > l) QuickSort(a,l,j);
}
int BinSearch(ll a[], ll n, ll x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid+1;
		}
		else{
			r = mid;
		}
	}
	if (a[l] == x){
		if( a[l]==a[l+1]) return 1;
	}
	return 0;
}
ll a[1000001], b[1000001] , n , t , i;
int main(){
	scanf("%lld",&t);
	while( t-- ){
		scanf("%lld",&n);
		for( i = 0 ; i < n ; i++){
			scanf("%lld",&a[i]);
			b[i]= a[i];
		}
		QuickSort(b,0,n-1);
		int ktra = 0 ;
		for( i = 0 ; i < n ; i++){
			if( BinSearch(b,n,a[i])){
				printf("%lld\n",a[i]);
				ktra = 1;
				break;
			}
		}
		if( ktra == 0){
			printf("NO\n");
		}
	}
} 
