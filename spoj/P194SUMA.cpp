#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
bool cmp(ll a ,ll b){
	return a < b;
}
int main(){
	ll n , k ;
	cin >> n >> k ;
	ll a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i = 0 ; i < n ; i++ ){
		if( a[i] < 0 ){
			if( k== 0 ) break;
			a[i] = -a[i];
			k--;
		}
	}
	sort(a,a+n);
	if( k&1 && k > 0) a[0] = -a[0];
	ll s = 0;
	for(int i = 0 ; i < n ; i++){
		s+=a[i];
	} 
	cout << s;
} 
