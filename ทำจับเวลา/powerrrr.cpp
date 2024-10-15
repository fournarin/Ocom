#include <bits/stdc++.h>	
using namespace std;	
long long binpow(long long a,long long b){
    if(b==0) return 1;
    long long res = binpow(a,b/2);
    if(b%2==1) return (res * res * a)%10000 ;
    else return (res * res)%10000 ;
}
int main()	{	 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;i++){
    long long a,b,d;
    cin>>a>>b>>d;
    string s;
    int o=binpow(a,b);
    s=to_string(o);
    s="0000"+s;
    for(int j=s.length()-d;j<s.length();j++){
        cout<<s[j];
    }cout<<"\n";
    }
    return 0;
    }
    /*
5
2 10 1
2 10 2
2 10 3
2 10 4
2 10 5
    */