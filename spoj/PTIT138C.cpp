#include <stdio.h>
#include <string.h>
int MangDoiXung(int a[],int n){
	int dem ;
	if( n%2 ==0 ){
		 dem = n/2;
	}
	else  dem = (n+1)/2;
	for(int i = 0 ; i < dem ; i++){
		if( a[i] != a[n-i-1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d\n",&t);
	while( t-- ){
		char a[10000] ; int s[10000];
		int size = 0;
		fgets(a,10000,stdin);
		for(int i = 0 ; i < strlen(a) ; i++ ){
			if( a[i]=='A' || a[i]=='B' || a[i]=='C' ||  a[i]=='a' || a[i]=='b' || a[i]=='c') s[i] = 2;  
			if( a[i]=='D' || a[i]=='E' || a[i]=='F' || a[i]=='d' || a[i]=='e' || a[i]=='f') s[i] = 3;
			if( a[i]=='G' || a[i]=='H' || a[i]=='I' || a[i]=='g' || a[i]=='h' || a[i]=='i') s[i] = 4;
			if( a[i]=='J' || a[i]=='K' || a[i]=='L' || a[i]=='j' || a[i]=='k' || a[i]=='l') s[i] = 5;
			if( a[i]=='M' || a[i]=='N' || a[i]=='O' || a[i]=='m' || a[i]=='n' || a[i]=='o') s[i] = 6;
			if( a[i]=='P' || a[i]=='Q' || a[i]=='R' || a[i]=='S' || a[i]=='p' || a[i]=='q' || a[i]=='r' || a[i]=='s') s[i] = 7;
			if( a[i]=='T' || a[i]=='U' || a[i]=='V' || a[i]=='t' || a[i]=='u' || a[i]=='v') s[i] = 8;
			if( a[i]=='W' || a[i]=='X' || a[i]=='Y' || a[i]=='Z' || a[i]=='w' || a[i]=='x' || a[i]=='y' || a[i]=='z') s[i] = 9;
			size ++;
		}
		size--;
		if( MangDoiXung(s,size)) printf("YES\n");
		else printf("NO\n");
	}
} 
