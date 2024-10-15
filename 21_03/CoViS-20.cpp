#include<bits/stdc++.h>
using namespace std;
string s2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;string s;
    cin>>s;int sum =0;
    for(int i=0;i<n;i++) sum+=s[i]-'0';
    int m;cin>>m;
    for(int i=0;i<m;i++){
        string s1;cin>>s1;
        for(int i=0;i<s1.length();i++){
            s1[i]=s2[((s1[i]-'A')+sum)%26];
        }
        cout<<s1<<"\n";
    }
    return 0;
}