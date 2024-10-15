#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int t=0;t<n;t++){
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        if(s.length()%(i+1)==0){
        string s1="",s2="";
        for(int j=0;j<=i;j++){
                s1+=s[j];
        }
        for(int k=0;k<s.length()/(i+1);k++){
            s2+=s1;
        }
            if(s==s2) {cout<<s1<<"\n";break;}
        }
    }}
    return 0;
}
/*
5
ABCABCABCABC
ABCABCABDABC
!@#$%!@#$%
AAAAAAAAAAAAAAAAAAA
BADBOYBADBOYBADBOYBADBOYB
*/