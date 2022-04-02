#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int vang,xanh,Do;
    int max = 0;
    for(int i = 1 ; i <= x ; i++ ){
        vang = i;
        xanh = i+1;
        Do = i+2;
        if( xanh <= y && Do <= z ){
            if( max < vang + xanh + Do ) max = vang + xanh + Do;
        }
        else break;
    }
    cout << max;
} 
