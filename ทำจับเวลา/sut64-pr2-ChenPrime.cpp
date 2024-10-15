// 1 ชั่วโมง 4.04 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,sum=0;cin>>n>>m;
    vector<int>prime(m+1000,0);
    vector<int>prime2(m+1000,0);
    vector<int>v;
    for(int i=2;i*i<=m+500;i++){
        if(prime[i]==0){
            for(int j=i+i;j<=m+500;j+=i) prime[j] = 1;
        }
    }v.push_back(2);
    for(int i=3;i<=m+500;i+=2){
        if(prime[i]==0) v.push_back(i);
    }
    int j=0;
    for(int i=0;v[i]*v[j]<=m+500&&i<v.size();i++){
        for(j=i;v[i]*v[j]<=m+500&&j<v.size();j++){
            prime2[v[i]*v[j]]++;
        }
        j=i+1;
    }prime[1]=1;
    for(int i=n;i<=m;i++) {
        if(prime[i]==0&&(prime[i+2]==0||prime2[i+2]>0)) sum++;
    }
    cout<<sum;
    return 0;
}
/*
2 10
*/
/*
5 19
*/
/*
2 100
*/
/*
900000 1000000
*/