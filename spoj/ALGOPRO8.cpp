#include <iostream>
using namespace std;
int main(){
	int n , m;
	cin >> n >> m;
	if( n < m ) swap(n,m);
	cout << m << " ";
	n -= m;
	if(n&1){
		cout << (n-1)/2;
	}
	else{
		cout << n/2;
	}
} 
