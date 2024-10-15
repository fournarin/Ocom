#include<bits/stdc++.h>
using namespace std;

int gcd(int n,int m){
    if(m==0) return n;
    return (m,n%m);
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<__gcd(n,m);
    return 0;
}