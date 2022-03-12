#include<iostream>
#include<vector>
#include<stack>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k;
    cin >> n >> k;
    stack<int> st;
    for(ll i = 0 ; i < n ; i++ ){
    	char tmpp;
    	cin >> tmpp;
    	int tmp =(int)(tmpp-'0');
        if( st.empty() ){
            st.push(tmp);
        }
        else{
            if( tmp <= st.top() ){
                st.push(tmp);
            }
            else{
                while( !st.empty() && tmp > st.top() && k > 0){
                    st.pop();
                    k--;
                  
                }
                st.push(tmp);
            }
        }
    }
    while( k > 0 && !st.empty()){
       st.pop();
       k--;
    }
   	vector<int> v;
   	while( !st.empty() ){
   		v.push_back(st.top());
   		st.pop();
	}
	for(ll i = v.size() -1  ; i >=0 ; i-- ) cout << v[i];
} 
