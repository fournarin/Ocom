#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    set<int>s2; set<int>s4; set<int>s6;
    cin>>n>>m;
    bool prime[m+11] = {};
    prime[0]=true;
    prime[1]=true;
    for(int i=2;i<=m+10;i++){
        if(!prime[i]){
            for(int j=i+i;j<=m+10;j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=n-6;i<=m+6;i++){
        if(i<=m+2&&i>=n-2&&!prime[i]&&!prime[i+2]) {
            if(i>=n&&i<=m) s2.insert(i);
            if(i+2>=n&&i+2<=m) s2.insert(i+2);
        }
        if(i<=m+4&&i>=n-4&&!prime[i]&&!prime[i+4]) {
            if(i>=n&&i<=m) s4.insert(i);
            if(i+4>=n&&i+4<=m) s4.insert(i+4);
            //cout<<i<<" "<<i+4<<"\n";
        }
        if(!prime[i]&&!prime[i+6]) {
            if(i>=n&&i<=m) s6.insert(i);
            if(i+6>=n&&i+6<=m) s6.insert(i+6);
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