#include <bits/stdc++.h>
using namespace std;

void solve() {
	int dem = 0;
	stack<int> st;
	string s;
	getline(cin,s);
	for(auto i:s) {
		if(i == '(') {
			dem++;
			cout << dem << ' ';
			st.push(dem);
		}
		if(i == ')') {
			cout << st.top() << ' ';
			st.pop();
		}
	}
	cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
	int T = 1;
	cin >> T;
	cin.ignore();
	while( T-- )
    	solve();
    return 0;
}