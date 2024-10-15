#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;char c;cin>>c;
    string s;cin>>s;int co=0;
    for(int i=0;i<=n+n;i++){
        for(int h=0;h<s.length();h++){
            for(int x=0;x<=(n+n);x++){
            int j=x%(n+n);
            if(s[h]=='U'){
                if(i+j==n||j-i==n||j==n) cout<<c;
            else cout<<".";
            }
            else if(s[h]=='R'){
                if(i+j==n*3||j-i==n||i==n) cout<<c;
            else cout<<".";
            }
            else if(s[h]=='D'){
                if(i+j==n*3||i-j==n||j==n) cout<<c;
            else cout<<".";
            }
            else if(s[h]=='L'){
                if(i+j==n||i-j==n||i==n) cout<<c;
            else cout<<".";
            }}
        }
        cout<<"\n";
    }
    return 0;
}
/*
5
3
2 1
4 3 7
2 0 6 2
4 6 1 5 4
*/