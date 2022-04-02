#include<stdio.h>
typedef long long ll;
const ll mod = 1e9+7;
ll fibo[2000];
int main(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2 ; i <= 1500 ; i++ ){
		fibo[i] = (fibo[i-1]%mod + fibo[i-2]%mod) %mod;
	}
	int t;
	scanf("%d",&t);
	while( t-- ){
		int n;
		scanf("%d",&n);
		printf("%lld\n",fibo[n]);
	}
} 
