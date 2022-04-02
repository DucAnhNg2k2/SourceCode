#include"stdio.h"
int mark[1000000]={0};
int main(){
    int t;
    scanf("%d",&t);
    while( t-- ){
	int n ;
	scanf("%d",&n);
	int a[n][n];
	int p = 1;
	int phai = n-1;
	int trai = 0;
	int duoi = n-1;
	int tren = 0;
	while(p <= n*n){
		for(int i = trai ; i <= phai ; i++){
			a[tren][i] = p;
			p++;
		}
		tren++;
		for(int i = tren ; i <= duoi ; i++ ){
			a[i][phai] = p;
			p++;
		}
		phai--;
		for(int i = phai ; i>= trai ; i-- ){
			a[duoi][i] =p;
			p++;
		}
		duoi--;
		for(int i = duoi ; i>= tren ; i--){
			a[i][trai]=p;
			p++;
		}
		trai++;
	}
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d\n",a[x-1][y-1]);
    }
} 
