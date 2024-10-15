#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    5
    ABCABCABCABC
    ABCABCABDABC
    !@#$%!@#$%
    AAAAAAAAAAAAAAAAAAA
    BADBOYBADBOYBADBOYBADBOYB
    */
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
        string s;
        string a="";
        cin>>s;
        for(int i=0;i<s.length();i++){
            string b="";
            a+=s[i];
            if(s.length()%a.length() !=0 ) continue;
            for(int j=0;j<s.length();j+=a.length()){
                b+=a;
            }
            if(b==s) {
                cout<<a<<"\n";
                break;
            }
        }
        }
    return 0;
    
}
