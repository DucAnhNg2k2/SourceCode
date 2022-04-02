#include<iostream>
using namespace std;
typedef long long ll;
ll tmax(ll a){
	ll s = 0;
	bool check = 0;
	if( a%10 == 0 ) check=1;
	while( a > 0 ){
		int sdu = a%10;
		a/=10;
		if( sdu== 5 ) sdu =6;
		s = s*10 + sdu;
	}
	ll s1 = 0 ;
	while( s > 0 ){
		int sdu = s%10;
		s/=10;
		s1 = s1*10 + sdu;
	}
	if( check==1 ) return s1*10;
	return s1;
}
ll tmin(ll a){
	ll s = 0;
	bool check = 0;
	if( a%10 == 0 ) check=1;
	while( a > 0 ){
		int sdu = a%10;
		a/=10;
		if( sdu== 6 ) sdu = 5;
		s = s*10 + sdu;
	}
	ll s1 = 0 ;
	while( s > 0 ){
		int sdu = s%10;
		s/=10;
		s1 = s1*10 + sdu;
	}
	if( check==1 ) return s1*10;
	return s1;
}
int main(){
	ll a , b;
	cin >> a >> b;
	cout << tmin(a)+tmin(b) << " "<<tmax(a) + tmax(b);
}
 
