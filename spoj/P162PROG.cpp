#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	int dem=1;
	while(n!=1){
		if(n%2==0){
			n=n/2;
			continue;
		}
		else{
			n=n-1;
			dem++;
		}
	}
	printf("%d",dem);
} 
