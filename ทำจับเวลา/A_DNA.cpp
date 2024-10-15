//. 15.52 นาที
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s; int sum=0;
    s+="00000";
    for(int i=0;i<s.length()-4;i++){
        if(s[i]=='G'&&s[i+1]=='T'&&s[i+2]=='A'){
            sum++;
            i=i+2;
        }
        else if(s[i]=='A'&&s[i+1]=='C'&&s[i+2]=='A'&&s[i+3]=='C'){
            sum++;
            i=i+3;
        }
    }
    cout<<sum<<"\n";
    (sum%2==0) ? cout<<"N" : cout<<"Y";
    return 0;
}
/*
TGTATACACTGTAT
*/
/*
GCGCGCGTGCTGCGTACACTT-GTACACATGTCAAACACACACGTTAAC
*/