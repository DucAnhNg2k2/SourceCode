#include<stdio.h>
#include<stdbool.h>
typedef long long ll;
bool mark[1000005] = {false};
void sangnt(){
    mark[1] = 1;
    mark[0] = 1;
    for(int i = 2 ; i*i <= 1e6 ; i++ ){
        if( !mark[i] ){
            for(int j = i*i ; j <= 1e6 ; j+=i ){
                mark[j] = 1;
            }
        }
    }
}
int size = 0 ;
int main(){
	ll prime[100000] ;
    sangnt();
    for(int i = 1 ; i <= 1e6 ; i++ ){
        if ( mark[i] == 0 ){
        	prime[size] = i;
        	size++;
		}
    }
	 int t;
	 scanf("%d",&t);
	 while( t-- ){
	 	ll L,n;
	 	scanf("%lld %lld",&L,&n);
         int dem = 0;
	 	for(int i = 0 ; i < size ; i++ ){
	 		if( prime[i]*prime[i] <= n && prime[i]*prime[i] >= L) dem++;
	 		else break;
	 	}
         printf("%d\n",dem);
	 }
	
}
