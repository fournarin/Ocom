// ประมาณ 20 นาที
#include<bits/stdc++.h>
using namespace std;

int pdx(int n){
    int i=2,sum=1;
    while(n!=1){
        int f=0;
        while(n%i==0){
            n/=i;
            f++;
        }
        if(f>0) sum*=f;
        i++;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;cin>>m;int n;cin>>n;
    vector<int>v(m+1,0);
    vector<bool>r(m+1,false);
    int tmp=0;
    for(int i=1;i<=m;i++){
        v[i]=pdx(i);
    }
    for(int w=1;w<=m;w++){
            if(v[w]>tmp){
                tmp=v[w];
                r[w]=true;
            }
        }
    for(int i=0;i<n;i++){
        int x; cin>>x;
        cout<<v[x]<<" ";
        for(int u=x;u>=0;u--){
            if(r[u]){
                cout<<u<<"\n";
                break;}
        }
    }
    return 0;
}
/*
100 5
10
4
8
100
50
*/
/*
10000 19
1
2
3
4
5
6
7
8
9
16
32
64
128
256
512
1024
2048
4096
8192
*/