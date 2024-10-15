#include<bits/stdc++.h>
using namespace std;
#define k 5000
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    bool p[k+1]={};
    int f[k+1];
    vector<int>v;
    for(int i=2;i*i<=k;i++){
        if(!p[i]){
            for(int j=i+i;j<=k;j+=i){
                p[j]=true;
                
            }
        }
    }
    for(int i=2;i*i<=k;i++){
        if(!p[i]) {v.push_back(i);f[i]++;}
    }
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            for(int x=j;x<v.size();x++){
                if(v[i]+v[j]+v[x]<=k) f[v[i]+v[j]+v[x]]++;
            }
        }
    }
    for(int u=0;u<n;u++){
        int x ;cin>>x;
        cout<<f[x]<<"\n";
    }
    return 0;
}
/*
5
3
9
17
21
33
*/