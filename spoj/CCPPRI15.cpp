#include<bits/stdc++.h>
using namespace std;
#define c 1500000
// sang phan tich thanh so nguyen to
vector<int> minIsPrime(c,0);
void sangptnt(){
    for(int i = 2 ; i*i <= c ; i++ ){
        // neu i la so nguyen to
        if( !minIsPrime[i] ){
            for(int j = i *i ; j <= c ; j +=i ){
                // neu boi cua i chua duoc kiem tra
                if( !minIsPrime[j] ) minIsPrime[j] = i;
            }
        }
    }
    for(int i = 1 ; i <= c ; i++ ){
        if( !minIsPrime[i] ) minIsPrime[i] = i;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	sangptnt();
	int t;
	cin >> t;
	while( t-- ){
		int n;
        cin >> n;
        for(int i = 1 ; i <= n ; i++ ) cout << minIsPrime[i] << ' ';
        cout << endl;
	}
} 
