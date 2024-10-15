#include<bits/stdc++.h>
using namespace std;

int prodex(int k){
    int sum=1;int i=2;
    while(k!=1){
        int tmp = 0;
        while(k%i==0){
            k/=i;
            tmp++;
        }
        if(tmp!=0) sum*=tmp;
        i++;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;int m;cin>>m;
    bool v[n+1]={};
    int tmp=0;
    for(int i=1;i<=n;i++){
        int u=prodex(i);
        if(u>tmp){
            v[i]=true;
            tmp=u;
        }
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        cout<<prodex(x)<<" ";
        for(int j=x;j>=0;j--){
            if(v[j]) {cout<<j<<"\n";
            break;}
        }
    }
    return 0;
}