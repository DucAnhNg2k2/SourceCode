#include<bits/stdc++.h>
using namespace std;
char resetR(char c){
    // right
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    if( s1.find(c) != -1 ){
        int s = s1.find(c);
        if( s == 9 ) c ='q';
        else{
            c = s1[s+1];
        }
        return c;
    }
    if( s2.find(c) != -1 ){
        int s = s2.find(c);
        if( s == 9 ) c ='a';
        else{
            c = s2[s+1];
        }
        return c;
    }
    if( s3.find(c) != -1 ){
        int s = s3.find(c);
        if( s == 9 ) c ='z';
        else{
            c = s3[s+1];
        }
        return c;
    }
}
char resetL(char c){
    // left
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    if( s1.find(c) != -1 ){
        int s = s1.find(c);
        if( s == 0 ) c ='p';
        else{
            c = s1[s-1];
        }
        return c;
    }
    if( s2.find(c) != -1 ){
        int s = s2.find(c);
        if( s == 0 ) c =';';
        else{
            c = s2[s-1];
        }
        return c;
    }
    if( s3.find(c) != -1 ){
        int s = s3.find(c);
        if( s == 0 ) c ='/';
        else{
            c = s3[s-1];
        }
        return c;
    }
}
int main(){
    char c;
    cin >> c;
    string s;
    cin >> s;
    if( c == 'L')
    {
        for(int i = 0 ; i< s.length() ; i++ ){
           s[i] = resetR(s[i]);
        }
        cout << s;
    }
    else
    {
		for(int i = 0 ; i< s.length() ; i++ ){
           s[i] = resetL(s[i]);
        }
        cout << s;
    }
} 
