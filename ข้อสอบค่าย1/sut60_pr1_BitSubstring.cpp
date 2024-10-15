#include<bits/stdc++.h>
using namespace std;

int n,sum=0;
string s,s1;

void bit(int k){
    if(k==n){
        if(s.find(s1)!=-1) sum++;
    }
    else{
        s+='0';
        bit(k+1);
        s.erase(s.length()-1,1);
        s+='1';
        bit(k+1);
        s.erase(s.length()-1,1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>s1;
    bit(0);
    cout<<sum;
    return 0;
}