//.  23.47 นาที
#include<bits/stdc++.h>
using namespace std;
int n,a0,a1,d,s0=0,s1=0,s2=0,sum=0;
string s;

void sol(int k){
    
    if(k==n){
        sum++;
        if(sum==d){
            int u=0;
            for(int i=0;i<n;i++){
                if(s[i]!='0'){
                    int g=1;
                    for(int j=0;j<n-i;j++){
                        g*=2;
                    }
                    u+=(s[i]-'0')*(g-1);
                }
            }
            cout<<u;
        }
    }
    else {
        s+='0';
        s0++;
        if(s0<=a0) sol(k+1);
        s.erase(s.length()-1,1);
        s0--;
        if(s.find("2")==-1){
        s+='1';
        s1++;
        if(s1<=a1)sol(k+1);
        s.erase(s.length()-1,1);
        s1--;}
        if(s!=""){
        s+='2';
        s2++;
        if(s2<=1)sol(k+1);
        s.erase(s.length()-1,1);
        s2--;}
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a0>>a1>>d;
    n=1+a0+a1;
    sol(0);
    if(sum<d) cout<<"NONE";
    return 0;
}
/*
2 1 4
*/
/*
1 2 5
*/