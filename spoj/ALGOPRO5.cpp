#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long start = 1, sum = 1;
	int cs = 1;
	while (cs < n) {
		start *= 2;
		sum += start;
		cs++;
	}
	cout << sum*2;
} 
