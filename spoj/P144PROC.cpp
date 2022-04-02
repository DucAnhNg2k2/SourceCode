#include"iostream"
#include"math.h"
using namespace std;
typedef long long ll;
ll a , b ;
#define e 1000000007
ll PowMod(ll a,ll b){
	if( b==0 ) return 1;
	if( b==1) return a;
	else{
		ll p = PowMod(a,b/2);
		if( b%2==0 ) return (  p%e * p%e )	%e;
		else return  ( ( p%e * p%e )%e * a%e ) %e;
	}
}
int main(){
	while(true){
		cin >> a >> b;
		if(a==0 && b==0) break;
		else cout << PowMod(a,b) << endl;
	}
} 
