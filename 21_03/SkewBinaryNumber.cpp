#include<bits/stdc++.h>
using namespace std;
int a,b,c,sum=0;string s="";
int a0=0,a1=0; bool dd=true;

void print(string s1){
    dd=false;
    int r=0;
    for(int i=0;i<s1.length();i++){
        r+=(s1[i]-'0')*(pow(2,s1.length()-i)-1);
    }
    cout<<r;
}

void chk(int k){
    if(k==a+b+1){
        sum++;
        if(sum==c) print(s);
    }
    else{
        s+='0';
        a0++;
        if(a0<=a) chk(k+1);
        s.erase(s.length()-1,1);
        a0--;
        if(s.find("2")==-1){
        s+='1';
        a1++;
        if(a1<=b) chk(k+1);
        s.erase(s.length()-1,1);
        a1--;
        }
        if(s.find("2")==-1){
        s+='2';
        chk(k+1);
        s.erase(s.length()-1,1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    chk(0);
    if(dd) cout<<"NONE";
    return 0;
}