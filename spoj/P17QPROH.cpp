#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
	return a > b;
}
int dem = 1 ;
void solve(){
	int n;
	cin >> n;
	long long a[n];
	long long b[n];
	for(int i = 0 ; i < n ; i++ ) cin >> a[i];
	for(int i = 0 ; i < n ; i++ ) cin >> b[i];
	sort(a,a+n);
	sort(b,b+n,check);
	long long s = 0 ;
	for(int i = 0 ; i< n ; i++ ){
		s += a[i]*b[i];
	}
	cout << "Case #" << dem << ": " << s << endl;
	dem++;
}
int main(){
	int t;
	cin >> t;
	while( t-- ){
		solve();
	}
} 
