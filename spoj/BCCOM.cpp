#include <iostream>
using namespace std;
int dem(long long n){
	int d = 0 ;
	while( n > 0 ){
		n/=10;
		d++;
	}
	return d;
}
int nen(long long n){
	int s = 0;
	while( n > 0 ){
		s += n%10;
		n/=10;
	}
	return s;
}
int main(){
	int t;
	cin >> t ;
	while( t-- )
	{
	long long n;
	cin >> n;
	while( dem(n) > 1 ){
		n = nen(n);
	}
	cout << n << endl;
	}
} 
