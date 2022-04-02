#include<bits/stdc++.h>
using namespace std;
typedef double dd;
typedef long long ll;
dd css(dd a,dd b,dd c,dd d){
    if( a == -1 ){
        a = b-(d-c);
        return  c-b==d-c?a:-1;
    }
    if( b == -1){
        b = d-c+a;
        return c-b==d-c?b:-1;
    }
    if( c== -1 ){
        c = d-(b-a);
        return c-b==d-c?c:-1;
    }
    d = b-a+c;
    return c-b==d-c?d:-1;
    
}
dd csn(dd a,dd b,dd c ,dd d){
    if( a== -1 ){
        a = b/(d/c);
        return c/b ==d/c?a:-1;
    }
   	if( b==-1){
        b = d/c*a;
        return c/b==d/c?b:-1;
    }
    if( c==-1){
        c = d/(b/a);
        return c/b==d/c?c:-1;
    }
    d = b/a*c;
    return c/b==d/c?d:-1;
}
main(){
    double a,b,c,d;
    while(1){
        cin >> a >> b >> c >> d;
        if( a== -1 && b == -1 ) break;
        double x = css(a,b,c,d);
        double y = csn(a,b,c,d);
        if( x <=0 || x > 10000 ) x = -1;
        if( y <=0 || y > 10000 ) y = -1;
        if( x!=-1 ){
        	cout << x << endl;
        	continue;
		}
        if( y == (long long)(y) ){
        	cout << y << endl;
        	continue;
		}
        cout << -1 << endl;
    }
}  
