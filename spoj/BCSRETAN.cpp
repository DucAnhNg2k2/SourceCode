#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin >> n;
	stack<int> st;
	while(true){
		if( n== 0 ) break;
		if( n%2 == 0 ){
			st.push(7);
			n = (n-1)/2;
		}
		if( n%2 == 1){
			st.push(4);
			n /=2;
		}
		if( n== 1 ){
			st.push(4);
			break;
		}
		if( n== 2 ){
			st.push(7);
			break;
		}
	}
	while( !st.empty() ){
		cout << st.top();
		st.pop();
	}
} 
