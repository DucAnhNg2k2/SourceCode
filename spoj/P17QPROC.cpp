#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mark[10000001] = {0};
void sangHoanHao(){
    for(int i = 1 ; i <= 1e7 ; i++ ){
        for(int j = i*2 ; j <= 1e7 ; j+=i ){
                mark[j] += i;
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    sangHoanHao();
    int a,b;
    cin >> a >> b;
    ll sum = 0 ;
    for(int i = a ; i <= b ; i++ ){
    	sum += abs(i-mark[i]);
    }
	cout << sum;
} 
