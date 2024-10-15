#include<bits/stdc++.h>
using namespace std;

string g="01";
int n,k,sum=0,e=0;
string s;

void pulse(int b){
    if(n==b){ 
       // cout<<++sum<<" . "<<s<<"\n";
       sum++;
    }
    else{
    if(s[b-1]!='0'||s==""){ s+='0';
    e++;
    if(e<=k) pulse(b+1);
    s.erase(s.length()-1,1);
    e--;
    }
    s+='1';
    pulse(b+1);
    s.erase(s.length()-1,1);
    }
}

int main(){
    cin>>n>>k;
    pulse(0);
    cout<<sum;
    return 0;
}