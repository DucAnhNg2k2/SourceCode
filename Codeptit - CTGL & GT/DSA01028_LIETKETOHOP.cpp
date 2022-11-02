#include<bits/stdc++.h>
using namespace std;

int n , k , a[10000] , ok , b[10000];

void ktao(){
	for(int i=1 ; i <= k ; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if(i==0){
		ok = 0;
	}
	else{
		a[i]++;
		for(int j= i + 1; j <= k; ++j){
			a[j] = a[j-1] + 1;
		}
	}
}

void solve(){
	cin>>n>>k;
	int x[10000];
	for(int i = 1; i <= n; i++){
		cin >> x[i];
	}
	set<int> s;
	for(int i = 1; i <= n; i++) s.insert(x[i]);
	int pos = 1;
	for(auto i : s ) {
		b[pos++] = i;
	}
	n = s.size();
	ok = 1;
	ktao();
	while(ok){
		for(int i = 1; i <= k; i++){
			cout<<b[a[i]]<<" ";
		}
		cout<<endl;
		sinh();
	}
}

int main(){
	solve();
}
