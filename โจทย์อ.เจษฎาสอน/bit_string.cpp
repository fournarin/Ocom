#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
string s;
void nub(int k){
    if(k==n){
        if(s.find("00000") !=-1||s.find("11111") !=-1) sum++;
    }
    
    else{
        s +='0';
        nub(k+1);
        s.erase(s.length()-1,1);
        s+='1';
        nub(k+1);
        s.erase(s.length()-1,1);
    }
}
int main(){
    cin>>n;
    nub(0);
    cout<<sum;
}