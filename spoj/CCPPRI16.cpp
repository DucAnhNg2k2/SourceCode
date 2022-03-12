#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<bool> mark(1e7+5,0);
void sangnt(){
    mark[1] = 1;
    mark[0] = 1;
    for(int i = 2 ; i*i <= 1e7 ; i++ ){
        if( !mark[i] ){
            for(int j = i*i ; j <= 1e7 ; j+=i ){
                mark[j] = 1;
            }
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    sangnt();
    vector<ll> prime;
    for(int i = 1 ; i <= 1e7 ; i++ ){
        if ( mark[i] == 0 ) prime.push_back(i);
    }
	 int t;
	 cin >> t;
	 while( t-- ){
	 	ll n;
	 	cin >> n;
         int dem = 0;
	 	for(int i = 0 ; i < prime.size() ; i++ ){
	 		if( prime[i]*prime[i] <= n ) dem++;
	 		else break;
	 	}
         cout << dem << endl;
	 }
	
} 
