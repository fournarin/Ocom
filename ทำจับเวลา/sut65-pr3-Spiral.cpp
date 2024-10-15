// 20.16 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int x,y;cin>>y>>x;
    int l;cin>>l;
    int v;cin>>v;
    char c;cin>>c;
    int idxi[]={ 0, 1, 0,-1};
    int idxj[]={ 1, 0,-1, 0};
    int a[n][n]={};
    int f[]={1,-1};
    a[x][y]=1;
    for(int u=0;u<l;u++){
        for(int k=0;k<=u;k++){
            x += idxi[u%4] ;
            y += idxj[u%4] * f[v];
            if(x>=0&&x<n&&y>=0&&y<n)
            a[x][y]++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>0) cout<<c;
            else cout<<".";
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

output :

........
........
CCCCCC..
C....C..
C.CC.C..
C..C.C..
CCCC.C..
.....C..

*/
/*10 55 10 0 X
10
5 5
10
0
X

output :

..........
.XXXXXXXXX
XX........
XX.XXXXXX.
XX.X....X.
XX.X.XX.X.
XX.X..X.X.
XX.XXXX.X.
XX......X.
XXXXXXXXX.


*/
/*
10
5 5
10
1
H

output :

..........
HHHHHHHHHH
H........H
H.HHHHHH.H
H.H....H.H
H.H.HH.H.H
H.H.H..H.H
H.H.HHHH.H
H.H......H
H.HHHHHHHH
*/