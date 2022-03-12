#include<stdio.h>
struct LeoNui{
	int len;
	int xuong;
};
typedef struct LeoNui LeoNui;
int main(){
	int n;
	scanf("%d",&n);
	LeoNui l[n];
	int LEN = 0;
	int XUONG = 0;
	for(int i = 0 ; i < n ; i++ ){
		scanf("%d %d",&l[i].len,&l[i].xuong);
		LEN += l[i].len;
		XUONG += l[i].xuong;
	}
	if( LEN > XUONG ){
		int min = 100000;
		for(int i = 0 ; i < n ; i++ ){
			if( min > l[i].xuong ) min = l[i].xuong;
		}
		printf("%d",LEN+min);
	}
	if( LEN < XUONG ){
		int min = 100000;
		for(int i = 0 ; i < n ; i++ ){
			if( min > l[i].len ) min = l[i].len;
		}
		printf("%d",XUONG+min);
	}
} 
