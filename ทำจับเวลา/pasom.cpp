#include <bits/stdc++.h>	
using namespace std;
vector<int>v;int m;string s;
string t="1234567";
set<string>s1;
void think(int k){
    if(k==m){
        string s2=s;
        sort(s2.begin(),s2.end());
        s1.insert(s2);
    }
    else{
        for(int i=0;i<v.size();i++){
            if(k+v[i]<=m){
        s+=t[i];
        think(k+v[i]);
        s.erase(s.length()-1,1);}
        }
    }
}
int main()	{	 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;cin>>m;
    for(int r=0;r<m;r++) {int e;cin>>e;v.push_back(e);}
    think(0);
    cout<<s1.size()<<"\n";
    s1.clear();
    v.clear();
    }
    return 0;
}
/*
5
2 2
1 1
2 2
1 2
2 2
2 3
2 2
3 3
3 3
1 2 3
*/
/*
1
7 200
1 2 5 5 10 10 20
*/