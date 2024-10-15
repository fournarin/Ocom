#include<bits/stdc++.h>
using namespace std;
int main(){
    bool prime[5000] ;
    vector<int> v;
    vector<int>a(5001,0);
    memset(prime , true ,sizeof(prime));
    memset(prime , true ,sizeof(prime));
    for(int p=2;p*p<=5000;p++){
        if(prime[p] == true) {
            for(int s=p+p;s<=5000;s+=p){
                prime[s]=false;
            }
        }
    }
    for(int i=2;i<=5000;i++){
        if(prime[i]==true) v.push_back(i);
    }
    a[3]=1;
    a[5]=1;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            for(int k=j;k<v.size();k++){
                if((v[i]+v[j]+v[k])<=5000){
                    a[v[i]+v[j]+v[k]]++;
                }
                }
            }
        }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        cout<<a[m]<<"\n";
    }
    return 0;
    
}
/*
5
3
9
17
21
33
*/