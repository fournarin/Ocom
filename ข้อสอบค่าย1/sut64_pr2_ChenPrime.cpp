#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,t,woww=0;
    cin>>r>>t;
    bool prime[t+3];
    int chen[t+3]={};
    for(int i=0;i<=t+2;i++){
        prime[i]=true;
    }
    vector<int>v;
    //memset(prime,true,sizeof(prime));
    //memset(chen,false,sizeof(chen));
    for(int i=2;i*i<=t+2;i++){
        if(prime[i]==true){
            for(int j=i+i;j<=t+2;j+=i) prime[j]=false;
        }
    }
    v.push_back(2);
    for(int i=3;i<=t+2;i+=2) {
        if(prime[i]==true) {
            v.push_back(i);
            //cout<<i<<" ";
        }//                                  900000 1000000
    }///*
    for(int i=0;(v[i]*v[i])<=(t+2);i++){
        for(int j=i;v[i]*v[j]<=(t+2);j++){
                chen[(v[i]*v[j])]++;
        }
    }
    prime[1]=false;
    for(int i=r;i<=t;i++) {
        if((prime[i]==true&&chen[i+2]>0)||(prime[i]==true&&prime[i+2]==true)) woww++;
    }
    //cout<<"\nwhtgr";
    cout<<woww;

    
    return 0;
}