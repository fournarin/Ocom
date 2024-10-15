// 17.20 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s,s1,l; cin>>s;
        for(int i=0;i<s.length();i++){
            s1="";l="";
            for(int j=0;j<=i;j++){
                s1+=s[j];
            }
        for(int k=0;k<s.length()/s1.length();k++) l+=s1;
        if(l==s) {
            cout<<s1<<"\n";
            break;
        }
        }
    }
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
