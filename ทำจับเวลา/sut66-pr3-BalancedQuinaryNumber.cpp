// 31.44 นาที
#include<bits/stdc++.h>
using namespace std;
int s[]={5,25,125,625,3125};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;string e="";
        if(x==0) {cout<<"0"<<"\n";goto maa;}
    for(int a1=-2;a1<=2;a1++)
    for(int a2=-2;a2<=2;a2++)
    for(int a3=-2;a3<=2;a3++)
    for(int a4=-2;a4<=2;a4++)
    for(int a5=-2;a5<=2;a5++)
    for(int a6=-2;a6<=2;a6++)
    if(x==a1*s[0]+a2*s[1]+a3*s[2]+a4*s[3]+a5*s[4]+a6){
        e+=to_string(a6);e+=" ";
        e+=to_string(a1);e+=" ";
        e+=to_string(a2);e+=" ";
        e+=to_string(a3);e+=" ";
        e+=to_string(a4);e+=" ";
        e+=to_string(a5);e+=" ";
        for(int r=e.length()-1;r>=0;r--){
            if(e[r]!=' '&&e[r]!='0'){
                for(int d=0;d<=r;d++){
                    cout<<e[d];
                }
                cout<<"\n";
                goto manee;
            }
        }
    }
    maa:;
    manee:;
    }
    return 0;
}
/*
5
4
8
-8
13
-134
*/