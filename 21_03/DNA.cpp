#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;int sum=0;bool ck = true;
    for(int i=0;i<s.length();i++){
        if(i+2<s.length()){
            if(s[i]=='G'&&s[i+1]=='T'&&s[i+2]=='A'){
                sum++;
                i+=2;
                continue;
            }
        }
        if(i+3<s.length()){
            if(s[i]=='A'&&s[i+1]=='C'&&s[i+2]=='A'&&s[i+3]=='C'){
                sum++;
                i+=3;
            }
        }
    }
    (sum%2==0) ? cout<<sum<<"\n"<<"N" : cout<<sum<<"\n"<<"Y";
    return 0;
}