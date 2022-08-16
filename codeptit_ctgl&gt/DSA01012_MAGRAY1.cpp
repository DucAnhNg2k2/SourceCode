#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<string> v;
// gray so bit = 1
	v.push_back("0");
	v.push_back("1");
	v.resize(pow(2,n));
// gray so bit = i 
	for(int i = 2 ; i <= n ; i++ ){
		int dx = pow(2,i)/2;
		int bot = 1;
	// sao chep cac ma gray dao nguoc
		for(int j = dx ; j < pow(2,i) ; j++ ){
			v[j] = v[j-bot];
			bot+=2;
		}
	// them bit 0 o dau tien
		for(int j = 0 ; j < dx ; j++ ){
			v[j] = "0" + v[j];
		}
	// them bit 1 o dau tien
		for(int j = dx ; j < pow(2,i) ; j++ ){
			v[j] = "1" + v[j];
		}
	}
	for(int i = 0 ; i < pow(2,n) ; i++ ){
		cout << v[i] << ' ';
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
} 
