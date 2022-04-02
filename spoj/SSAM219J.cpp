#include"iostream"
using namespace std;
bool BinarySearch(long long a[],int l,int r,long long S){
	while( l <= r){
		int m =(l+r)/2;
		if( a[m] == S) return true;
		else if( a[m] > S){
			r = m -1;
		}
		else{
			l = m + 1;
		}
	}
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while( t-- ){
	long long n , k ;
	cin >> n >> k;
	long long a[n], l[n];
	for(int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	l[0] = a[0];
	for(int i = 1 ; i < n ; i++){
		l[i]=a[i] + l[i-1];
	}
	int Ktra = 0 ;
	for(int i = 0 ; i < n ; i++){
		if( l[i] == k ){
			Ktra = 1;
			break;
		}
		if( l[i] > k){
			if(BinarySearch(l,0,i-1,l[i]-k) == 1){
				Ktra = 1;
				break;
			}
		}
	}
	if( Ktra == 1 ) cout<<"YES"<<endl;
	else cout << "NO" <<endl;
	}
}  
