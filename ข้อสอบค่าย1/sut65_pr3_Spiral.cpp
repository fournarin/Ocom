#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n; 
    int a[n+1][n+1]={};
    int x,y; cin>>x>>y;
    int l; cin>>l;
    int v; cin>>v;
    char d; cin>>d;
    int r[4] = {-1, 0, 1, 0};
    int c[4] = { 0, 1, 0,-1};
    int s[]={1,-1};
    a[y][x] = 1;
    for(int i=0;i<=l;i++){
        for(int j=0;j<i;j++){
            y += r[(i)%4];
            x += s[v]*c[(i)%4];
            a[y][x] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1) cout<<d<<" ";
            else cout<<". ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
8
2 4
6
0
C
*/
/*
10
5 5
10
0
X
*/
/*
10
5 5
10
1
H
*/