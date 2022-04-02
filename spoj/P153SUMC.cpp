#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
int main(){
	ll x,y,n;
	cin >> x >> y >> n;
	ll l[1000] ={0};
	l[1] = x;
	l[2] = y;
	for(int i = 3 ; i <=  6 ; i++ ){
		l[i] =  l[i-1] - l[i-2];
	}
	if( n%6 == 0 ) n =6; 
	else n%=6;
	cout << l[n];
}  
