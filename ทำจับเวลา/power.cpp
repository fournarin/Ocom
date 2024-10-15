#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;cin>>k;
    for(int y=0;y<k;y++){
    int n,p,d;cin>>n>>p>>d;int mod=n;
    for(int i=1;i<p;i++){
        mod=(mod*n)%10000;
    }
    string s=to_string(mod);
        for(int i=0;i<=4;i++){
            s='0'+s;
        }
        string s2="";
    for(int i=s.length()-1;i>s.length()-d-1;i--){
        s2+=s[i];
    }
    for(int i=s2.length()-1;i>=0;i--) cout<<s2[i];
    cout<<"\n";}
    return 0;
}
/*
3
2 10000000 3
3 100 3
999 1000000 4
*/
/*
5
2 10 1
2 10 2
2 10 3
2 10 4
2 4 4
*/