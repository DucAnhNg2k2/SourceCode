#include "iostream"
#include "math.h"
using namespace std;
bool IsPrime(long long n){
	if( n < 2 ) return false;
	for(int i = 2 ; i <=sqrt(n);i++){
		if( n%i==0) return false;
	}
	return true;
}
int main(){
	long long n;
	cin >> n;
	if(IsPrime(n)) cout<<"YES";
	else cout <<"NO";
} 
