#include<bits/stdc++.h>	
using namespace std;
int main(){	   
    int n,q;cin>>n>>q;
    vector<int> a(n+1);	 
    for(int i=1;i<=n;i++){	 
        cin>>a[i];	      
        a[i]+=a[i-1];	
        }	   
    for(int i=n-1;i>=1;i--){
        a[i]=min(a[i],a[i+1]);	    
    }	 
    while(q--){	    
            int w;cin>>w;	
        int l=1,r=n,mid,ans=0;	
        while(l<=r){	   
        int mid=(l+r)/2;
        if(a[mid]>w){	  
        r=mid-1;	   
        }	        
        else{	    
            ans=mid;
            l=mid+1;	
        }	       
    }	      
    cout<<ans<<endl;
    }	
    return 0;
}