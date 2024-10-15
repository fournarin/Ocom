//.   15.05 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,sum=0;cin>>n>>m;
    vector<bool>p(m+1,false);
    for(int i=1;i*i<=m;i++){
        for(int j=1;j*j*j*i*i<=m;j++){
            if(j*j*j*i*i>=n) p[j*j*j*i*i]=true;
        }
    }
    for(int i=2;pow(i,2)<=m;i++){
        for(int j=2;pow(i,j)<=m;j++){
            p[pow(i,j)]=false;
        }
    } p[1]=false;
    for(int i=n;i<=m;i++){
        if(p[i]) sum++;
    }
    cout<<sum;
    return 0;
}
/*
72 200
*/
/*
1 10000000
*/