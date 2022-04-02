#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
    ios_base::sync_with_stdio(false);
    ull l,r,x;
    cin >> l >> r >> x;
    bool kt = 0 ;
    ull b = x;
    ull s = 1;
    if( s >= l && s <= r ){
    	 cout << s  << ' ';
    	 kt = 1;
	}
    if( b >= l && b <= r ){
    	 cout << b << ' ';
    	 kt = 1;
	}
    if( b <= r ){
    	ull s = b;
    	while( r/x >= s){
    		s *= x;
    		if( s >= l && s <= r){
    			cout << s << ' ';
    			kt = 1;
			}
		}
	}
	if( kt == 0 ) cout << - 1 ;
}  
