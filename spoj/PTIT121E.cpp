#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	stack<int> st;
	string s;
	cin >> s;
	for(int i = 0 ; i < s.length() ; i++ ){
		if( s[i]=='C') st.push(12);
		if( s[i]=='O') st.push(16);
		if( s[i]=='H') st.push(1);
		if( s[i]=='(') st.push(0);
		if( s[i]>='2' && s[i] <='9' ){
			int t = (int)(s[i]-'0');
			int sum = t*st.top();
			st.pop();
			st.push(sum);
		}
		if( s[i]==')'){
			ll sum = 0 ;
			while( st.top() != 0 ){
				sum += st.top();
				st.pop();
			}
			st.pop();
			st.push(sum);
		}
	}
	ll sum = 0 ;
	while( !st.empty() ){
		sum += st.top();
		st.pop();
	}
	cout << sum ;
} 
