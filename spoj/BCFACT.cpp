#include"iostream"
#include"math.h"
using namespace std;
long long GT(int n){
	if(n==0) return 1;
	else return n*GT(n-1);
}
int main(){
	int n ;
	cin >> n;
	while(n!=0){
		cout << GT(n) <<endl;
		cin >> n;
	}
} 
