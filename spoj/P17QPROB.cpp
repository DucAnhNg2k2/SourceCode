#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct{
    char a[1000];
}data;
bool check(data a,data b){
    char s1[1000] , s2[1000];
    strcpy(s1,a.a);
    strcat(s1,b.a);
 
    strcpy(s2,b.a);
    strcat(s2,a.a);
 
    if( strcmp(s1,s2) >= 0 ) return true;
    else return false;
}
void swap(data *a,data *b){
    char s1[1000];
    strcpy(s1,a->a);
    strcpy(a->a,b->a);
    strcpy(b->a,s1);
}
int main(){
    int t;
    scanf("%d",&t);
    data ma[15];
    while( t-- ){
        int m;
        scanf("%d\n",&m);
        for(int i = 1 ; i <= m ; i++ ){
            scanf("%s",&ma[i].a);
        }
        for(int i = 1 ; i < m ; i++ ){
            for(int j = i+1 ; j <=m ; j++ ){
                if( check(ma[i],ma[j]) ){
                    swap(&ma[i],&ma[j]);
                }
            }
        }
        for(int i = 1 ; i <= m ; i++ ){
            printf("%s",ma[i].a);
        }
        printf("\n");
    }
} 
