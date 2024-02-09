#include<bits/stdc++.h>
using namespace std;

int main() {
	  ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int n;
	cin >> n;
	vector<long long> a(n), b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++) {
		if(a[i] > b[i]) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
// 2 2 5 5
// 7 7 0 0
/*


*/
