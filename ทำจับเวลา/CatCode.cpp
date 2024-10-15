#include <bits/stdc++.h>	
using namespace std;	
const int MOD = 999983;	
int hah[999990],val[999990];
string s;
int a,b;
int main()	{	 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    int k,m;	 
    cin >> k >> m;	    
    for(int i=1;i<=k;i++){
        string s;	    
        cin >> s;	   
        a=0;	    
        for(int j=0;j<m;j++){
            a = (a<<1) + (s[j]-'0');
        }	      
            b=a%MOD;
        while(val[b]!=0){
            b=(b+1)%MOD;	  
        }	     
            val[b]=i;	
            hah[val[b]]=a;	
    }	
    int q;	 
    cin >> q;
    while(q--){
        int l;	    
        int a=0;	
        cin >> l >> s;	  
        bool ans[k+1];	   
        memset(ans,0,sizeof(ans));	 
        int ok=0;	    
        for(int i=0;i<m-1;i++){
            a = (a<<1) + (s[i]-'0');
            }	      
        for(int i=m-1;i<l;i++){	  
            a = (a<<1) + (s[i]-'0');
            b = a%MOD;	    
            while(val[b]!=0){
                if(hah[val[b]]==a){
                    ans[val[b]]=1;	                
                    ok=1;	                   
                    break;	            
                }	              
                b=(b+1)%MOD;	 
            }	          
         a-=(a&(1<<(m-1)));	 
    }	       
    if(ok==0){	       
        cout << "OK\n";	  
    }
    else{	     
            for(int i=1;i<=k;i++){
                if(ans[i]) cout << i << " ";
            }	            
        cout << '\n';	 
        }	
    }	
    return 0;
}