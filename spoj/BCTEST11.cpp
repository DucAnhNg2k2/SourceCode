#include<bits/stdc++.h>
using namespace std;
vector <bool> mark(1000+1,false);
void sangMayMan(){
    mark[4] = true;
    mark[7] = true;
    mark[44] = true;
    mark[47] = true;
    mark[74] =true;
    mark[77] =true;
    mark[444] =true;
    mark[447] =true;
    mark[474] =true;
    mark[477] =true;
    mark[744] = true;
    mark[744] = true;
    mark[747] = true;
    mark[774] = true;
    mark[777] = true;
}
int main(){
    sangMayMan();
    int n;
    cin >> n;
    bool check = false;
    for(int i = 1 ; i <= n ; i++ ){
            if( n%i == 0 && mark[i] ){
                check = true;
                break;
            }
    }
    if( check ) cout <<"YES";
    else cout <<"NO";
} 
