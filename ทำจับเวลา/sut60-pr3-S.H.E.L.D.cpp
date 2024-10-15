// 6.55 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;char c;cin>>c>>n;
    for(int i=0;i<n+n+1;i++){
        for(int j=0;j<n+n+1;j++){
            if(i==j||i==n||j==n||i+j==n+n) cout<<"+";
            else if(i+j<=3*n&&i+j>=n&&j-i<=n&&i-j<=n) cout<<c;
            else cout<<".";
        }
        cout<<"\n";
    }
    return 0;
}
/*
X
3
output :

*/
/*
*
7
output :
+......+......+
.+....*+*....+.
..+..**+**..+..
...+***+***+...
...*+**+**+*...
..***+*+*+***..
.*****+++*****.
+++++++++++++++
.*****+++*****.
..***+*+*+***..
...*+**+**+*...
...+***+***+...
..+..**+**..+..
.+....*+*....+.
+......+......+
*/