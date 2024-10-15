#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string c="0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s,s1="";
    int n,k;
    cin>>s;
    cin>>n;
    map<char,int> m;
    for(int i=0;i<43;i++){
        m[c[i]]=i;
    }
    for(int i=1;true;i++) if((n*i-1)%43==0) {k=(n*i)/n;break;}
    //cout<<k;
    for(int i=0;i<s.length();i++){
       s1 += char(48+((m[s[i]]*k)%43));
        //cout<<m[s[i]]<<" "<<m[s[i]]*k<<" "<<(m[s[i]]*k)%43<<" "<<char(48+((m[s[i]]*k)%43))<<"\n";
    }
    cout<<s1;
    return 0;
}
/*
EXAM2
5
*/
/*
UFJFU
5
*/
/*
CK<RD<RD3GDMG@6NTCM1DRMGCMG@M
28
*/