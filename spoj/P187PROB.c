#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define n 2000000 
long long s = 0;
bool isPrime[2000001] ={0};
int minPrime[2000001] ={0};
void SangNguyenTo(){
	int a = 2;
	while(true){
		if( a*a > n ) return;
		int p = a*a;
		while( p <= n ){
			isPrime[p] = true;
			p+=a;
		}
		a++;
		while( a <= n && isPrime[a] ) a++;
		if(a > n ) return;
	}
}
void PhanTichSo(){
	for(int i = 2; i*i <= n ; ++i ){
		if( minPrime[i] ==0 ){
			for(int j = i*i ; j <= n ;j +=i){
				if(minPrime[j] == 0 ){
					minPrime[j] = i;
				}
			}
		}
	}
	for(int i = 2 ; i<= n; ++i){
		if(minPrime[i] ==0 ){
			minPrime[i] = i;
		}
	}
}
int SUM(int a){
	int s = 0;
	while( a!= 1){
		s += minPrime[a];
		a /= minPrime[a];
	}
	return s;
}
int main(){
	int t;
	scanf("%d",&t);
	SangNguyenTo();
	PhanTichSo();
	long long sum = 0;
	while( t-- ){
		int a;
		scanf("%d",&a);
		if( isPrime[a] ) sum+=SUM(a);
		else sum+=a;
	}
	printf("%lld",sum);
} 
