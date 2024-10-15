#include <bits/stdc++.h>	
using namespace std;
vector<int>v;int m=3;int sum=0;string s,s1;
bool a[101][51][34][26][21][17][15]={};
void think(int k,int a1,int a2,int a3,int a4,int a5,int a6,int a7){
    if(k==4){
        if (a[a1][a2][a3][a4][a5][a6][a7]=false){
        sum++;
        cout<<s<<"\n";
        a[a1][a2][a3][a4][a5][a6][a7]=true;
        }
    }
    if(k>4) k=0;
    else{
        s+='1';
        think(k+1,a1+1,0,0,0,0,0,0);
        s.erase(s.length()-1,1);
        s+='2';
        think(k+2,0,a2+1,0,0,0,0,0);
        s.erase(s.length()-1,1);
        s+='3';
        think(k+3,0,0,a3+1,0,0,0,0);
        s.erase(s.length()-1,1);
    }
}
int main()	{	 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<4;i++) v.push_back(i);
    think(0,0,0,0,0,0,0,0);
    cout<<sum;
    return 0;
}
////////////
#include<bits/stdc++.h>
using namespace std;
int arr[6]={1,1,1,2,3,5},co=0,size_=6,target=1000;
void in(int cur,int idx){
    if(cur==target){
        co++;
        return;
    }
    if(cur>target||idx==size_) return;
    in(cur,idx+1);
    for(int i=0;cur<=target;i++){
        cur+=arr[idx];
        in(cur,idx+1);
    }
}
int main(){
    in(0,0);
    cout<<co;
}

