// 41.35 นาที
#include<bits/stdc++.h>
using namespace std;
string h="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n; int sum=0;string e;
    cin>>e;
    for(int i=0;i<n;i++) sum+=e[i]-'0';
    int m;cin>>m;
    for(int u=0;u<m;u++){
    string s,s1="";cin>>s;
    int k=s.length();
    for(int i=0;i<k;i++){
        int g = (s[i]-'A'+sum)%26;
        s1+=h[g];
    }
    cout<<s1<<"\n";}
    return 0;
}

/*
4
1507
3
LISA
BLINK
BLACKPINK
*/
/*
5
54321
1
THEQUICKBROWNFOXJUMPSOVERTHELAZYDOG
*/