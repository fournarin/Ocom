//. 15.30 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool>prime(5001,false);
    vector<int>vw(5001,0);
    vector<int>v;
    for(int i=2;i*i<=5000;i++){
        if(!prime[i]){
            for(int j=i+i;j<=5000;j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=2;i<=5000;i++){
        if(!prime[i]) {
            v.push_back(i);
            vw[i]++;}
    }
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            for(int k=j;k<v.size();k++){
                if(v[i]+v[j]+v[k]<=5000){
                    vw[v[i]+v[j]+v[k]]++;
                }
            }
        }
    }
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cout<<vw[x]<<"\n";
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