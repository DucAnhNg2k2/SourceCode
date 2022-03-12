#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    stack<char> st;
    for(int i = 0 ; i < s.length() ; i++ ){
    	if( s[i]=='('){
    		st.push('(');
		}
		if( s[i]=='['){
			st.push('[');
		}
		if( s[i]==')'){
			if( st.empty() ){
				cout <<"no";
				return ;
			}
			if( st.top() !='('){
				cout <<"no";
				return ;
			}
			else st.pop();
		}
		if( s[i]==']'){
			if( st.empty() ){
				cout <<"no";
				return ;
			}
			if( st.top() != '['){
				cout <<"no";
				return ;
			}
			else st.pop();
		}
	}
	if ( st.empty() ){
		cout <<"yes";
	}
	else cout <<"no";
}
int main(){
    while(true){
    	string s;
    	getline(cin,s);
    	if( s.length() ==1 && s[0]=='.') return 0;
        solve(s);
        cout <<'\n';
    }
} 
