#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c;cin>>c; int n;cin>>n; int w;cin>>w; int l;cin>>l; int m;
    for(int x=-1;x<=l-1;x++){
    for(int i=0;i<=n*2;i++){
        for(int j=0;j<w;j++){
            int u=x%(n+n+1);
            m=abs(j+(n+n)-u)%(n+n+1);
            //cout<<i<<m<<" ";
            (i-m<=n&&i+m>=n&&m-i<=n&&i+m<=3*n) ? cout<<c:cout<<".";
        }
    cout<<"\n";
    }
    }
    return 0;
}
/*
X
4
30
5
*/
/*
O
3
60
60
*/