#include<bits/stdc++.h>
using namespace std;
int n=2,g=16,sum=0;
string s;
string t={"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
void bit(int k){
    if(k==n) {
        if(s.find("00000")!=-1||s.find("11111")!=-1) sum++;
            cout<<s<<"\n";
        }
    else{
        for(int i=0;i<g;i++){
            s+=t[i];
        bit(k+1);
        s.erase(s.length()-1,1);
        }
    }
}

int main(){
    //cin>>n>>g;
    bit(0);
    //cout<<sum;
    return 0;
}