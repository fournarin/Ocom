#include<bits/stdc++.h>
using namespace std;
int z,o,n,sum=0,h,c0,c1;
string s;
bool b=true;
int haka(string u){
    int v = u.length();
    string u1="";
    for(int i=v-1;i>=0;i--) u1+=u[i];
    int sam=0;
    while(v){
        int x=1;
        for(int i=0;i<v;i++){
            x*=2;
        }
        sam+=(u1[v-1]-'0')*(x-1);
        v--;
    }
    return sam;
}

void sk(int k){
    if(k==h){
        for(int i=0;i<s.length();i++){
            if(s[i]=='2'){
                for(int j=i+1;j<s.length();j++){
                    if(s[j]=='1') goto manee;
                }
            }
        }
        sum++;
        if(sum==n) {
            cout<<haka(s);
            b=false;
        }
        manee:;
    }
    else{
    c0=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='0') c0++;
    }
    if(c0<z){
    s+='0';
    sk(k+1);
    s.erase(s.length()-1,1);
    }
    c1=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='1') c1++;
        
    }
    if(c1<o){
    s+='1';
    sk(k+1);
    s.erase(s.length()-1,1);
    }
    
    if(s.find("2")==-1){
    s+='2';
    sk(k+1);
    s.erase(s.length()-1,1);}}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>z>>o>>n;
    h=1+z+o;
    sk(0);
    if(b)cout<<"NONE";
    return 0;
}
/*
1 2 4 output : 28
*/
/*
2 1 4 output : 17
*/
/*
1 2 5 output : NONE
*/