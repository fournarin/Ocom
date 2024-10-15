#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int idx[] = {0,0,0,1,1,1,-1,-1,-1};
    int jdx[] = {0,1,-1,1,-1,0,0,1,-1};
    int n;cin>>n;int sum=0;
    int x,y;cin>>y>>x;
    int a[n][n]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char x;cin>>x;
            if(x=='*'){
                for(int k=0;k<9;k++){
                    if(i+idx[k]>=0&&i+idx[k]<n&&j+jdx[k]>=0&&j+jdx[k]<n){
                    a[i+idx[k]][j+jdx[k]]++;
                }}
            }
        }
    }
    stack<pair<int,int>> p;
    p.push({--x,--y});
    while(!p.empty()){
        int ax=p.top().first;
        int ay=p.top().second;
        p.pop();
        for(int k=0;k<9;k++){
            if(ax+idx[k]>=0&&ax+idx[k]<n&&ay+jdx[k]>=0&&ay+jdx[k]<n){
            if(a[ax+idx[k]][ay+jdx[k]]==0){
            p.push({ax+idx[k],ay+jdx[k]});
            a[ax+idx[k]][ay+jdx[k]]=-1;
            }
        }}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==-1){
            for(int k=0;k<9;k++){
            if(i+idx[k]>=0&&i+idx[k]<n&&j+jdx[k]>=0&&j+jdx[k]<n){
            if(a[i+idx[k]][j+jdx[k]]>0){
            sum+=a[i+idx[k]][j+jdx[k]];
            a[i+idx[k]][j+jdx[k]]=-2;
            }
        }
            }}
        }
    }
    cout<<sum;
    return 0;
}