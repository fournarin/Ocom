// 37.08 นาที
#include<bits/stdc++.h>
using namespace std;
int b[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,100000000};
int f[10]={1,2,6,24,120,720,5039,40319,362879,3628799};
long long int fac(int x){
    long long int n;
    for(int a10=0;a10<=10;a10++)
    for(int a9=0;a9<=9;a9++)
    for(int a8=0;a8<=8;a8++)
    for(int a7=0;a7<=7;a7++)
    for(int a6=0;a6<=6;a6++)
    for(int a5=0;a5<=5;a5++)
    for(int a4=0;a4<=4;a4++)
    for(int a3=0;a3<=3;a3++)
    for(int a2=0;a2<=2;a2++)
    for(int a1=0;a1<=1;a1++)
    if((a10*f[9]+a9*f[8]+a8*f[7]+a7*f[6]+a6*f[5]+a5*f[4]+a4*f[3]+a3*f[2]+a2*f[1]+a1)==x){
        n=a1+a2*b[1]+a3*b[2]+a4*b[3]+a5*b[4]+a6*b[5]+a7*b[6]+a8*b[7]+a9*b[8]+a10*b[9];
        goto manee;
    }
    manee:;
    return n;
    
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        cout<<fac(x)<<"\n";
    }
    return 0;
}

/*
5
1
2
7
19
1000
*/