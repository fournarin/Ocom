// 16.16 เปฺิดดูโพย
#include<bits/stdc++.h>
using namespace std;
string s; int n,y,tmp=0,sum=0;

void bit(int k){
    if(k==n){
        sum++;
    }
    else{
    if(s[s.length()-1]!='0'||s==""){
    s+='0';
    tmp++;
    if(tmp<=y) bit(k+1);
    s.erase(s.length()-1,1);
        tmp--;
    }
    s+='1';
    bit(k+1);
    s.erase(s.length()-1,1);}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>y;
    bit(0);
    cout<<sum;
    return 0;
}