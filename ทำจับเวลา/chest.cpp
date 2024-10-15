#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <vector <ll>> arr={{},{0,0,0,0},{1,0,0,0},{0,1,0,0},{2,0,0,0},{0,0,1,0},{1,1,0,0},{0,0,0,1},{3,0,0,0},{0,2,0,0},{1,0,1,0}};	
ll n,m;
vector <tuple <ll,ll,vector <ll>>> evp;	
vector <ll> make_neg(vector <ll> a){	
    for(ll i=0;i<4;i++) a[i]*=-1;
    return a;
}	
vector <ll> add(vector <ll> a,vector <ll> b){
    for(ll i=0;i<4;i++) a[i]+=b[i];	
    return a;
}	
int main()	{	 
    ios::sync_with_stdio(0);
    cin.tie(0);	  
    cin >> m >> n;
    for(ll i=0;i<m;i++){
        ll a,b,x;	   
        cin >> x >> a >> b;	   
        evp.push_back({a,x,arr[x]});
        evp.push_back({b+1,-x,make_neg(arr[x])});
    }	   
    sort(evp.begin(),evp.end());
    ll last=-1,cur=0,mx=0;	  
    vector <ll> v(4,0);	 
    for(auto [pos,val,vec]:evp){
        if(val>0){	          
            last=pos;	    
            }	      
        else{	          
            ll c=(v[0]+1)*(v[1]+1)*(v[2]+1)*(v[3]+1);
            if(c>mx){	            
        mx=c;	            
        cur=pos-last;	    
        }	           
        else if(c==mx) cur+=pos-last;
        }	       
        v=add(v,vec);
    }	   
    cout << mx << " " << cur;
    return 0;
    }