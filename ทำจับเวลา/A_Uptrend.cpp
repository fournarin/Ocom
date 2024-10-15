//. 14.25 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;int ms=0;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) {
        int tmp=v[i].second,sum=1;
        for(int j=i;j<n;j++){
            if(tmp<v[j].second){
                sum++;
                tmp=v[j].second;
            }
        }ms=max(ms,sum);
    }
    cout<<ms;
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
30600
30800
30750
30900
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