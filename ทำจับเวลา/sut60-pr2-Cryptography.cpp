// 16 นาที
#include<bits/stdc++.h>
using namespace std;

string s2="0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s="";int n,m;
    cin>>s1>>n;
    for(int i=1;true;i++) if(i*n%43==1) {m=i;break;}
    for(int i=0;i<s1.length();i++){
        s+=s2[((int(s1[i])-48)*m)%43];
    }
    cout<<s;
    return 0;
}
/*
UFJFU
5
output : @=O=@
*/
/*
CK<RD<RD3GDMG@6NTCM1DRMGCMG@M
28
output : THIS=IS=AN=ENCRYPTED=SENTENCE
*/