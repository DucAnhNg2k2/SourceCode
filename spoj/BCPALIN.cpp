#include "iostream"
#include "math.h"
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	long long n;
	cin >> n ;
	long long N = n;
	long long s = 0;
	while( n > 0 ){
		s += n%10;
		s *= 10;
		n /= 10;
	}
	s /=10;
	if( s== N ) cout <<"YES"<<endl;
	else cout <<"NO" << endl;
	}
} 
