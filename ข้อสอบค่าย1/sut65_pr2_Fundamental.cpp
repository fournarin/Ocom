#include<bits/stdc++.h>
using namespace std;

int chk(int n){
    int sum=0;
    while(n%2==0){
        sum++;
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) {
            sum++;
            n/=i;
            i-=2;
        }
    }
    if(n>1) {
        sum++;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int m;cin>>m;
    cout<<chk(m)<<"\n";
    }
    return 0;
}
/*
3
1999998761
1999999967
1999999999
*/