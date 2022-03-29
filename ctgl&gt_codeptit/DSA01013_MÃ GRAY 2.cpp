#include <bits/stdc++.h>
using namespace std;

vector<string> v;
vector<string> s;
int n,x[15];

void Xuat() {
	string ans = "";
	for(int i = 1; i <=n ;i++ ) {
		ans += to_string(x[i]);
	}
	s.push_back(ans);
}

void Try(int i) {
	for(int j =0; j <=1; j++) {
		x[i] = j;
		if( i < n ) Try(i+1);
		else Xuat();
	}
}

void solve() {
	v.clear(); s.clear();
	string str;
	cin >> str;
	n = str.size();
	Try(1);
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
	for(int i=0; i < v.size(); i++ ) {
		if( v[i] == str) {
			cout << s[i] << endl;
			return;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int t = 1;
	cin >> t;
	while( t-- ) {
		solve();
	}
} 
