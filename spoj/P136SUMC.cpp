#include<iostream>
using namespace std;
int dao(int a){
    int s = 0;
    while( a > 0 ){
        s = s*10 + a%10;
        a /= 10;
    }
    return s;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << max(dao(a),dao(b));
} 
