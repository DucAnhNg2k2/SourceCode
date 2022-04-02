#include"stdio.h"
struct Pokemon{
	char name[100];
	int p;
	int k;
	int data;
};
typedef struct Pokemon Pokemon;
int main(){
	int t;
	scanf("%d\n",&t);
	Pokemon pokemon[100];
	int i = 1 , dem = 0 , max = 0 , cs ;
	while( t-- ){
		if( t >= 1){
			
		pokemon[i].data = 0;
		gets(pokemon[i].name);
		scanf("%d %d\n",&pokemon[i].p,&pokemon[i].k);
		while(pokemon[i].k >= pokemon[i].p ){
			pokemon[i].k -=pokemon[i].p;
			dem++;
			pokemon[i].data++;
			pokemon[i].k +=2;
			}
		if( max < pokemon[i].data){
			max = pokemon[i].data;
			cs =i;
		}
		i++;
		}
		if( t == 0){
		pokemon[i].data = 0;
		gets(pokemon[i].name);
		scanf("%d %d",&pokemon[i].p,&pokemon[i].k);
		while(pokemon[i].k >= pokemon[i].p ){
			pokemon[i].k -=pokemon[i].p;
			dem++;
			pokemon[i].data++;
			pokemon[i].k +=2;
			}
		if( max < pokemon[i].data){
			max = pokemon[i].data;
			cs =i;
		}
		i++;
		}
	}
	printf("%d\n",dem);
	printf("%s",pokemon[cs].name);
	
} 
