#include <iostream>
using namespace std;
 
int main() {
	
	// your code her
    int t;
    cin >> t;
    while (t--){
    	int n,p;
    	cin >> n >> p;
    	int dem =0;
    	for (int i=1 ; i<= n ; i++){
    		int test =i;
    		while( test%p ==0){
    			test /=p;
    			dem++;
    		}
    	}
    	cout << dem << endl;
    }
	return 0;
} 
