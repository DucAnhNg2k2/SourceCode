#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long n;
	scanf("%lld",&n);
	if(n==2){
		printf("1\n");
		continue;
	}
	int dem2 = 0;
	for(int i =2 ; i <=sqrt(n);i++){
		int dem = 1;
		while(n%i==0 && i==2){
			n/=i;
			dem2++;
			}
		while(n%i==0 ){
			n/=i;
			dem++;
			}
		dem2*=dem;
		}
		if(n>1){
			dem2*=2;
		}
		printf("%d\n",dem2);
	}
} 
