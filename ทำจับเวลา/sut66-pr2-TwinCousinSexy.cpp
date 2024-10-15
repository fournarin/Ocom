// 20.11 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    set<int>s2,s4,s6;
    vector<bool>prime(m+7,false);
    for(int i=2;i*i<=m+6;i++){
        if(!prime[i]){
            for(int j=i+i;j<=m+6;j+=i) prime[j]=1;
        }
    }
    for(int i=n-6;i<=m;i++){
        if(!prime[i]&&!prime[i+2]){
            if(i>=n)s2.insert(i);
            if(i+2<=m&&i+2>=n) {
                s2.insert(i+2);
        }}
        if(!prime[i]&&!prime[i+4]){
            if(i>=n) s4.insert(i);
            if(i+4<=m&&i+4>=n) s4.insert(i+4);
        }
        if(!prime[i]&&!prime[i+6]){
            if(i>=n) s6.insert(i);
            if(i+6<=m&&i+6>=n) s6.insert(i+6);
        }
    }
    cout<<s2.size()<<"\n"<<s4.size()<<"\n"<<s6.size();
    return 0;
}
/*
5 20
*/
/*
13 31
*/
