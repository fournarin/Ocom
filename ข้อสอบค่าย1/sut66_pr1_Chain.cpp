#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ="NARINTHON"; //cin>>s;
    int n=7;//cin>>n;
    for(int i=0;i<=n*2;i++){
        for(int j=0;j<n*2;j++){
            if(i+j==n||i-j==n||j-i==n||i+j==3*n) cout<<s[0];
            else if(j==n*2-1&&i==n) cout<<s[1];
            else cout<<".";
            //cout<<i<<j<<" ";
        }
        for(int x=1;x<s.length()-1;x++){
        for(int j=1;j<n*2;j++){
            if(i+j==n||i-j==n||j-i==n||i+j==3*n) cout<<s[x];
            else if(j==1&&i==n) cout<<s[x-1];
            else if(j==n*2-1&&i==n) cout<<s[x+1];
            else cout<<".";
            //cout<<i<<j<<" ";
        }
        }
        for(int j=1;j<=n*2;j++){
            if(i+j==n||i-j==n||j-i==n||i+j==3*n) cout<<s[s.length()-1];
            else if(j==1&&i==n) cout<<s[s.length()-2];
            else cout<<".";
            //cout<<i<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
Luffy
5
*/
/*
LALISA
6
*/