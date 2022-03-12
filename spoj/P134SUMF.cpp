#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	vector<bool>mark(n+1,0);
	int gach = 0;
	for(int i = 2 ; i <= n ; i++){
		if( mark[i] == 0 ){
				gach++;
				if( gach == k ){
					cout << i ;
					return 0;
				}
			}
			for(int j = i*i ; j <= n ; j +=i ){
				if( mark[j] == 0 ){
					mark[j] = 1;
					gach++;
					if( gach == k ){
						cout << j ;
						return 0;
					}
				}
			}
	}
} 
