#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int A1=n,A2=n;
    int m=2*n;int sum1=0,sum2=0;
    while(m--){
        int x;cin>>x;
        if(x%2==0){
            sum1=0;
            sum2++;
            if(sum2>=3) A1-=3;
            else A1--;
        }
        else{
            sum1++;
            sum2=0;
            if(sum1>=3) A2-=3;
            else A2--;
        }
        if(A1<=0){
            cout<<"0"<<"\n"<<x;
            return 0;
        }
        else if(A2<=0){
            cout<<"1"<<"\n"<<x;
            return 0;
        }
    }
    
    return 0;
}
/*
6
7 5 2 4 8 1 3 9 1 1 1 2 1 3 1 4
*/