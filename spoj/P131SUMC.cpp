#include<bits/stdc++.h>
using namespace std;
float tinh(int a,int c,int b,int d){
    return fabs(((float)a/c) -((float)b/d));
}
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    double kq ;
    int res = 0;
    kq=tinh(a,c,b,d);
    if (tinh(c,d,a,b) > kq )
    {
        kq = tinh(c,d,a,b);
        res=1;
    }
    if (tinh(d,b,c,a) > kq )
    {
        kq=tinh(d,b,c,a);
        res=2;
    }
    if (tinh(b,a,d,c) >kq ) res=3;
    cout << res;
    return 0;
}
