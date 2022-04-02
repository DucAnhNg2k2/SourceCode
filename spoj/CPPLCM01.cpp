#include <iostream>
using namespace std;
typedef long long ll;
ll GCD(ll a,ll b){
	while (a*b!=0 ){
		if ( a>b ){
			a %= b;
		}
		else b%=a;
	}
	return a+b;
}
ll LCM(ll a , ll b ){
	return a*b/GCD(a,b);
}
int main() {
	
	// your code here
    int t;
    cin >> t;
    while ( t-- ){
    	ll a,b ;
    	cin >> a>>b;
    	cout << LCM(a,b) <<" "<< GCD(a,b)<< endl;
    }
	return 0;
} 
