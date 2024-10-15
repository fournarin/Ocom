#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int mux=0;
    vector<pair<int,int>>v;
    vector<int>d(n,1);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            if(v[i].second>v[j].second){
                d[i]=max(d[i],d[j]+1);
            }
        }
        mux=max(mux,d[i]);
    }
    cout<<mux;
    return 0;
}
/*
10
30750
30650
30800
30750
30650
30700
30900
30750
30800
30700
*/
/*
14
14
13
12
11
10
9
8
7
6
5
4
3
2
1
*/