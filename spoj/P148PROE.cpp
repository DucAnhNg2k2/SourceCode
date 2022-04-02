#include<stdio.h>
#include<string.h>
int main(){
	while(1){
	int n;
	scanf("%d",&n);
	if( n==0 ){
		return 0;
	}
	char s1[1000] , s2[1000] , s[1000] , s12[2000];
	scanf("%s",&s1);
	scanf("%s",&s2);
	scanf("%s",&s);
	int dem = 0 ;
	while(1){
		dem++;
		int size = 0 ;
		for(int i = 0 ; i < n ; i++ ){
			s12[size] = s2[i];
			size++;
			s12[size] = s1[i];
			size++;
		}
		s12[size] = 0;
		for(int i = 0 ; i < n ; i++ ){
			s1[i] = s12[i];
			s2[i] = s12[i+n];
		}
		if( strcmp(s,s12) == 0 ){
			printf("%d\n",dem);
			break;
		}
		if(dem==50){
			printf("-1\n");
			break;
			}
		}
	}
} 
