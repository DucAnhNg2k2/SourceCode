#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> minPrime(1e6+1,0);
void sangnt(){
    for(int i = 2 ; i*i<= 1e6 ; i++ ){
        if( !minPrime[i] ){
            for(int j =i*i ; j<= 1e6 ; j+=i ){
                if( !minPrime[j] ) minPrime[j] = i;
            }
        }
    }
    for(int i =2 ; i <= 1e6 ; i++){
        if( !minPrime[i] ) minPrime[i] =i;
    }
}
ll TongUoc(int n){
    int nho = n;
    map<int,int> m;
    while( n > 1 ){
        m[minPrime[n]]++;
        n/=minPrime[n];
    }
    ll s = 1;
    for(map<int,int>::iterator i = m.begin() ; i!= m.end() ;i++ ){
        s *= (pow((*i).first,(*i).second+1)-1)/((*i).first-1);
    }
    return s-nho;
}
int main(){
    sangnt();
    ll a,b;
    cin >> a >> b;
    ll dem = 0;
    for(int i = a ; i <= b; i++){
        if( TongUoc(i) > i ) dem++;
    }
    cout << dem ;
} 
