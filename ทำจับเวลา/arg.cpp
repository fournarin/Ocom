#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;cin>>n;int t;cin>>t;int sum=0;
    int s,h,w,o;
    int a[401][101]={};
    while(n--){
        cin>>s>>h>>w>>o;
        for(int i=s;i<s+w;i++){
            for(int j=0;j<h;j++){
                a[i][j]+=o;
            }
        }
    }
    for(int i=0;i<400;i++){
        for(int j=0;j<100;j++){
            if(a[i][j]==t) sum++;
        }
    }
    cout<<sum;
    return 0;
}
/*
3
2 10000000 2
3 100 1
999 1000000 4
*/
/*
5
2 10 1
2 100 2
2 1000 3
2 10000 4
2 100000 5
*/