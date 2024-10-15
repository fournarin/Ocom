// 8 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c ; cin>>c;
    int n ; cin>>n;
    int m ; cin>>m;
    for(int e=0;e<m;e++){
    for(int i=0;i<n;i++){
        for(int y=0;y<m;y++){
        for(int j=0;j<n;j++){
            if(i+j>=n/2&&i+j<=n-1+(n/2)&&i-j<=n/2&&j-i<=n/2) cout<<c;
            else cout<<".";
            //cout<<i<<j<<" ";
        }}
        cout<<"\n";
    }}
    return 0;
}
/*
*
3
2
*/
/*
X
5
3
*/