#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char c; cin>>c;
    int w; cin>>w;
    int h; cin>>h;
    for(int g=0;g<h;g++){
    for(int i=0;i<w;i++){
        for(int t=0;t<h;t++){
        for(int j=0;j<w;j++){
            if((i+j>=w/2)&&(i+j<=(w-1)+(w/2)) && i-j<=w/2 &&j-i<=w/2) cout<<c<<"";
            else cout<<".";
        }}
        cout<<"\n";
    }
    }
    return 0;
}