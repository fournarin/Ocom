#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,max=0;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        v.push_back(make_pair(k,i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        sum=1;
        int tmp=v[i].second;
        for(int j=i+1;j<v.size();j++){
            if(tmp<v[j].second) {
                sum++;
                tmp=v[j].second;
            }
        }
        if(sum>max) max=sum;
    }
    cout<<max;
    /*for(int i=0;i<n;i++){
        cout<<v[i].second<<" "<<v[i].first<<"\n";
    }
    cout<<"yaaa";*/
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