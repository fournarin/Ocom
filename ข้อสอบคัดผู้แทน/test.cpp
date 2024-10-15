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
    int n=5000000;
    //cin>>n;
    int m;
    //cin>>m;
    bool v[5000001]={};
    int tmp=0;
    for(int i=1;i<=n;i++){
        int u=prodex(i);
        if(u>tmp){
            v[i]=true;
            tmp=u;
        }
    }
    for(int i=0;i<=n;i++){
        if(v[i]) cout<<i<<",";
    }
    return 0;
}
/*
5000000 20
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
4999999
*/