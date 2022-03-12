#include <stdio.h>
#include <string.h>
#include <math.h>
char s[1000000] , r[1000000];
int ok(char s[],char r[]){
	for(int i = 1 ; i < strlen(s) ; i++ ){
		if ( abs(s[i] -s[i-1]) != abs(r[i] -r[i-1]) ) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--){
		gets(s);
		int size = 0 ;
		for(int i = strlen(s) -1 ; i>=0 ; i-- ){
			r[size] = s[i];
			size++;
		}
	//	printf("%s\n",r);
		if( ok(s,r) ) printf("YES\n");	
		else printf("NO\n");
	}
} 
