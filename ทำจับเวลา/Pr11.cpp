// 1 ชั่วโมง 4.04 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,sum=0;cin>>n>>m;
    vector<int>prime(m+100,0);
    vector<int>v;
    for(int i=3;i<=m+90;i+=2){
        if(prime[i]==0){v.push_back(i);
            for(int j=i+i;j<=m+90;j+=i) prime[j] = 1;
        }
    }
    int j=0;
    for(int i=0;v[i]*v[j]<=m+90&&i<v.size();i++){
        for(j=i;v[i]*v[j]<=m+90&&j<v.size();j++){
            prime[v[i]*v[j]]=2;
        }
        j=i+1;
    }prime[1]=1;
    
    for(int i=n;i<=m;i++) {
        if(prime[i]==0&&(prime[i+2]==0||prime[i+2]==2)) sum++;
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
900000 100000
*/