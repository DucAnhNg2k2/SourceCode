#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> mark(1e7+1,0);
void sangnt(){
	mark[0] = 0;
    mark[1] = 1;
    for(ll i = 2 ; i <= 1e7 ; i++ ){
        if( !mark[i] ){
            for(ll j = i*2 ; j <= 1e7 ; j+=i ){
                mark[j]++;
            }
        }
    }
    for(ll i = 2 ; i <= 1e7 ; i++ ){
    	if( mark[i] == 0 ) mark[i] = 1;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	sangnt();
	int t;
	cin >> t;
    int cs = 1;
	while( t-- ){
		ll a,b,k;
        cin >> a >> b >> k;
        int dem = 0;
        for(int i = a ; i<= b ; i++ ){
            if( mark[i] == k ) dem++;
        }
        cout << "Case #" << cs <<": " << dem << endl;
        cs++;
	}
} 
