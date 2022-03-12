#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    double x;
    double y;
};
int main(){
    Rectangle r[4];
    cin >> r[0].x >> r[0].y;
    cin >> r[1].x >> r[1].y;
    cin >> r[2].x >> r[2].y;
    if( r[0].x == r[1].x ){
         // --> r[2].x == r[3].x
         r[3].x = r[2].x;
         if(r[0].y == r[2].y) r[3].y = r[1].y;
         else r[3].y = r[0].y;
    }
    else if( r[0].x == r[2].x){
        r[3].x = r[1].x;
        if( r[2].y == r[1].y) r[3].y = r[0].y;
        else r[3].y = r[2].y;
    }
    else{
        if( r[0].y == r[1].y){
            r[3].x = r[0].x;
            r[3].y = r[2].y;
        }
        else{
            r[3].x = r[0].x;
            r[3].y = r[1].y;
        }
    }
    cout << r[3].x <<' ' << r[3].y;
} 
