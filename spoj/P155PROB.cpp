#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
	long long a,b;
	cin >> a>>b;
	long long s =a*b;
	for(int i =1 ; i<=5 ; i++){
		long long d;
		cin >> d;
		cout << d-s << ' ';
	}
 
	return 0;
} 
