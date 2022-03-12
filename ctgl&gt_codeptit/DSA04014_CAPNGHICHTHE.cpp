#include<stdio.h>
long long dem = 0 ;
void merge(long long a[],int l,int m,int r)
{   
    int n1 = (m-l+1) , n2 = (r-m);
    int n = n1-1;
    long long L[n1] , R[n2] ;
    for(int i = 0 ; i < n1 ; i++ )
    {
        L[i] = a[l+i];
    }
    for(int i = 0 ; i < n2 ; i++ )
    {
        R[i] = a[m+i+1];
    }
    int i = 0 , j = 0 , pos = l ;
    while( i < n1 && j < n2 )
    {
        if( L[i] <= R[j] )
        {
            a[pos++] = L[i++];
        }
        else
        {
            a[pos] = R[j] ;
            j++; pos++;
            dem += n1-i;
        }
    }
    while( i < n1 )
    {
        a[pos] = L[i];
        pos++;
        i++;
    }
    while( j < n2 )
    {
        a[pos] = R[j];
        pos++;
        j++;
    }
 
}
void MergeSort(long long a[],int l,int r)
{
    if( l < r )
    {
        int m = (l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main()
{   
	int t;
	scanf("%d",&t);
	while( t-- ) {
		dem = 0;
		int n;
	    scanf("%d",&n);
	    long long a[n+1];
	    for(int i = 1 ; i <= n ; i++ ) scanf("%lld",&a[i]);
	    MergeSort(a,1,n);
	    printf("%lld\n",dem);
	}
} 
