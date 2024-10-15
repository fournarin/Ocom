#include<bits/stdc++.h>
using namespace std;
vector<int>dp(5000009);
int prodex(int m){
    if(dp[m]>0) return dp[m];
    int b=1,i=2,c=0;
    while(m!=1){
        while(m%i==0){
            c++;
            m=m/i;
        }
        if(c!=0) b=b*c;
         i++;
         c=0;
    }
    dp[m]=b;
 return b;
}

int main() {
 int m,n,h;
 cin>>h>>n;
 for(int i=0;i<=n-1;i++){
   int l=0,k=0;
    cin>>m;
    cout<<prodex(m)<<" ";
    for(int w=1;w<=m;w++){
        if(l<prodex(w)){ l=prodex(w); k=w; }
    }
    cout<<k<<"\n";
}
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