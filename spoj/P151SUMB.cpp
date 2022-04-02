#include <iostream>
using namespace std;
 
int main() {
	
	// your code here
   int t;
   cin >> t;
   bool ok = false;
   int i,j;
   for(i = t*1.0/5 ; i >=0 ; i-- ){
      int s = t - 5*i;
      if ( s%3==0 ){
      	j = s*1.0/3;
      	ok = true ;
      	break;
      }
   }
   if ( ok == false ) cout << -1;
   else cout << i+j;
	return 0;
} 
