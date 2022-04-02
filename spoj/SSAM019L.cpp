#include <stdio.h>
#include <math.h>
 
int main(){
	int T;
	scanf ("%d", &T);
	for (int t = 0; t < T; t++){
		
		double h, H, n, s;
		scanf("%lf%lf", &n, &H);
		
		s = H/(2*n);
		for (int i = 1; i < n; i++){
			h = sqrt(2*i*s*H);
			printf ("%.6lf ", h);
		}
		printf ("\n"); 
	}
} 
