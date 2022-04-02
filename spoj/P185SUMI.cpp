#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i = sqrt(n) ; i >=1 ; i-- ){
			if( n%(i*i) == 0){
				printf("%d %d\n",i,n/(i*i));
				break;
			}
		}
	}
} 
