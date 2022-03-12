#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
    int dem =0;
    int n;
    cin >> n;
    for ( int i=0 ; i<n; i++){
    	int a,b;
    	cin >> a >> b;
    	if ( b-a>=2 ) dem++;
    }
    cout << dem;
	return 0;
} 
