// 8.29 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v={2};
    bool prime[30001]={};
    int chak[30001]={};
    for(int i=2;i<=30000;i++){
        if(!prime[i]){
            v.push_back(i);
            for(int j=i*i;j<=30000;j+=i) prime[j]=true;
        }
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size()&&v[i]+v[j]<=30000;j++)
        chak[v[i]+v[j]]++;
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cout<<chak[x]<<"\n";
    }
    return 0;
}
/*
2
4
98

output :
1
3
*/