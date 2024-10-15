#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c='O'  ; //cin>>c;
    int k=4,n=4 ; //cin>>k>>n;
    for(int x=0;x<n;x++){
    for(int i=0;i<=k*2;i++){
        for(int y=0;y<n;y++){
        for(int j=0;j<=k*2;j++){
            if(i==j&&x==y) cout<<"#";
            else if(i+j==k*2&&x+y==n-1) cout<<"#";
            else if((i==k||j==k)) cout<<"+";
            else if(i==j) cout<<"+";
            else if(i+j==k*2-1) cout<<"=";
            else if(i+j>=k&&i+j<=3*k&&i-j<=k&&j-i<=k) cout<<c;
            else cout<<".";
            //cout<<i<<j<<" ";
        }
            
        }
        cout<<"\n";
    }}
    return 0;
}
/*
X
3 2
*/
/*
*
5 3
*/