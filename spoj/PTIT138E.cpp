#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, dem = 1;
	cin >> n;
	int sodu;
   	while( n > 10 ){
   		sodu = n%10;
		n/=10;
		if( sodu >= 5 ) n++;
		dem*=10;	
	}
	cout << n*dem;
}
int main(){
    int t;
    cin >> t;
    while ( t-- )
    {
        /* code */
        solve();
        cout << endl;
    }
    
} 
