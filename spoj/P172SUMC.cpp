#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(0);
		 ll n;
    	cin >> n;
    	if( n%4 == 1 ) cout << 8;
    	if( n%4 == 2 ) cout << 4;
    	if( n%4 == 3 ) cout << 2;
    	if( n%4 == 0 ) cout << 6;
    
}  
