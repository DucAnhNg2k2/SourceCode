#include<bits/stdc++.h>
using namespace std;


void solve(){
	int ok = 1;
	int n;
	cin >> n;
	int a[n+5],b[n+5];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	for(int i = 0; i < n; i++){
		if(b[i] != a[i] && a[i] != b[n - i -1]){
			ok = 0;
			break;
		}
	}
	if(ok) cout << "Yes";
	else cout << "No";
	cout << endl;
}

main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}