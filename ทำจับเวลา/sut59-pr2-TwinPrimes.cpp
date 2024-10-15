// 10 นาที
#include<bits/stdc++.h>
using namespace std;
#define m 10000000
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<bool>p(m+10,0);
    for(int i=2;i*i<=m;i++){
        if(!p[i]){
            for(int j=i+i;j<=m;j+=i) p[j]=true;
        }
    }
    for(int r=0;r<n;r++){
    for(int i=a[r];true;i++){
        if(!p[i]&&!p[i+2]) {cout<<i<<" "<<i+2<<"\n"; break; }
    }}
    return 0;
}
/*
2
3 4
*/
/*
3
10 4950 5000
*/