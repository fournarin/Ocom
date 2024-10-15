
/*
6
6 4 10 1 4 12
*/
/*
12
4 16 1 2 6 12 1 2 256 2 256 1024
*/
///////////
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,maximum=1;
    cin>>n;
    int a[n]={},b[n]={};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    b[0]=1;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(a[i]%a[j]==0){
                b[i]=max(b[i],b[j]+1);
            }
        }
        if(b[i]==0) b[i]=1;
        maximum=max(b[i],maximum);
    }
    cout<<maximum;
    return 0;
}

/*
5
1 2 3 9 81
*/
/*
6
1 2 4 10 30 900
*/
/*
6
6 4 10 1 4 12
13
6 4 10 1 4 3 3 2 9 81 81 81 81
*/
/*
12
4 16 1 2 6 12 1 2 256 2 256 1024
*/