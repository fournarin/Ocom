// 9.45 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;int m[n];for(int i=0;i<n;i++) cin>>m[i];
    sort(m,m+n); int b[n]={}; b[0]=1; int ma=0;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(m[i]%m[j]==0){
                b[i]=max(b[i],b[j]+1);
                ma=max(ma,b[i]);
            }
        }
    }
    cout<<ma;
    return 0;
}
/*
6
6 4 10 1 4 12
*/
/*
12
4
16
1
2
6
12
1
2
256
2
256
1024
*/