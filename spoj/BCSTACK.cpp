#include<iostream>
#include<stack>
using namespace std;
typedef long long ll;
void INIT(stack<ll> &st){
	while( !st.empty()){
		st.pop();
	}
}
int main(){
    stack<ll> st;
    while(true){
        string s;
        getline(cin,s);
        if( s== "init"){
            INIT(st);
        }
        else if( s=="pop"){
        	if( !st.empty() ) st.pop();
		}
		else if( s=="top"){
			if( st.empty()) cout << -1 << endl;
			else cout << st.top() << endl;
		}
		else if( s=="size"){
			cout << st.size() << endl;
		}
		else if( s=="empty"){
			if( st.empty() ) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if ( s=="end"){
			return 0;
		}
		else{
			ll sum = 0;
			for(int i = 5 ; i< s.length() ; i++ ){
				sum = sum*10 + (int)(s[i]-'0');
			}
			st.push(sum);
		}
    }
    
} 
