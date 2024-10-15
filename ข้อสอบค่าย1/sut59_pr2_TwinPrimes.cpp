#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int h[n];int mak=0;
    for(int i=0;i<n;i++){
        cin>>h[i];
        mak=max(mak,h[i]);
    }
    mak+=500;
    vector<bool>prime(mak+10);
    prime[1]=true;
    for(int i=2;i*i<=mak;i++){
        if(!prime[i]){
            for(int j=i+i;j<=mak;j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
    for(int j=h[i];j<mak;j++){
        if(!prime[j]&&!prime[2+j]) {cout<<j<<" "<<j+2<<"\n";break;}
    }
    }
    return 0;
}
/*
2
3
4
*/
/*
3
10
4950
5000
*/