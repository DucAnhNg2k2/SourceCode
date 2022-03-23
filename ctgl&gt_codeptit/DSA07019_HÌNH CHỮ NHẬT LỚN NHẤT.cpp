#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> a(n+5) , L(n+5) , R(n+5);
	for(int i = 1 ; i <= n ; i++ )
		cin >> a[i];	
	
	stack<int> st;
	for(int i = 1 ; i <= n ; i++ ) {
		while( !st.empty() && a[i] <= a[st.top()] ) 
			st.pop();
		if( st.empty() ) L[i] = 1;
		else L[i] = st.top()+1;
		st.push(i);
	}
	
	while( !st.empty() ) 
		st.pop();
	for(int i = n ; i >= 1 ; i-- ) {
		while( !st.empty() && a[i] <= a[st.top()] )
			st.pop();
		if( st.empty() ) R[i] = n;
		else R[i] = st.top()-1;
		st.push(i);
	}
	long long Max = -1;
	for(int i = 1 ; i <= n ; i++ ) {
		Max = max((R[i]-L[i]+1)*a[i],Max);
	}
	cout << Max << endl;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
//	freopen("TEST.txt","r",stdin);
	int t;
	cin >> t;
	while( t-- ) {
		solve();
	}
}
