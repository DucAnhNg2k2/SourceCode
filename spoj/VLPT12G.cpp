#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cs = 1;
void solve(long long a,long long b){
    int dem = 0 ;
    for(int i = 2 ;  ; i++){
    	ll x = (i)*(i+1)/2;
    	if( x+1 > a && x+1 < b ){
    		ll tongbi = x+1;
    		ll h = sqrt(tongbi);
    		if( h*h == tongbi ) dem++;
		}
    	if( x+1 >= b ) break;
	}
	cout << "Case " << cs << ": " << dem << endl;
	cs++;
}
int main(){
    long long a,b;
    while(true){
        cin >> a >> b;
        if( a == 0 && b == 0 ) break;
        solve(a,b);
    }
} 
