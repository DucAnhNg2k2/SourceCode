#include<bits/stdc++.h>
using namespace std;
// tim max truoc xong tim min
void print(int a[],int n){
	for(int i = 0 ; i < n ; i++ ) cout << a[i] <<' ';
	cout << endl;
}
int test1(int a[],int n,int Max,int Min){
//	print(a,n);
    int dem = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        if( a[i] == Max ){
            for(int j = i ; j >= 1 ; j-- ){
                swap(a[j],a[j-1]);
         //       print(a,n);
                dem++;
            }
            break;
        }
    }
    for(int i = n - 1 ; i >= 0 ; i-- ){
        if( a[i] == Min ){
            for(int j = i ; j < n - 1 ; j++ ){
                swap(a[j],a[j+1]);
        //        print(a,n);
                dem++;
            }
            break;
        }
    }
    return dem;
}
int test2(int a[],int n,int Max,int Min){
//	print(a,n);
    int dem = 0 ;
    for(int i = n - 1 ; i >= 0 ; i-- ){
        if( a[i] == Min ){
            for(int j = i ; j < n - 1 ; j++ ){
                swap(a[j],a[j+1]);
           //     print(a,n);
                dem++;
            }
            break;
        }
    }
    for(int i = 0 ; i < n ; i++ ){
        if( a[i] == Max ){
            for(int j = i ; j >= 1 ; j-- ){
                swap(a[j],a[j-1]);
            //    print(a,n);
                dem++;
            }
            break;
        }
    }
    return dem;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    int Max = 0 ;
    int Min = 1e5;
    for(int i = 0 ; i< n ; i++ ){
        cin >> a[i];
        if( Max < a[i] ) Max = a[i];
        if( Min > a[i] ) Min = a[i];
    }
    int b[n];
    for(int i = 0 ; i< n ; i++ ) b[i] = a[i];
  	int A = test1(a,n,Max,Min);
  	int B = test2(b,n,Max,Min);
  	cout << min(A,B);
} 
