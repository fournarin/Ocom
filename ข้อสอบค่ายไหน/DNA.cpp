#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    string s,s1="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='G'&&s[i+1]=='T'&&s[i+2]=='A'){
            //cout<<s[i]<<s[i+1]<<s[i+2]<<"\n";
            /*s1+=s[i];
            s1+=s[i+1];
            s1+=s[i+2];*/
            sum++;
            i+=2;
            //s1+='_';
        }
        else if(s[i]=='A'&&s[i+1]=='C'&&s[i+2]=='A'&&s[i+3]=='C'){
            //cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<"\n";
            /*s1+=s[i];
            s1+=s[i+1];
            s1+=s[i+2];
            s1+=s[i+3];*/
            sum++;
            i+=3;
            //s1+='_';
        }
        //else s1+='_';
    }
    //cout<<s1<<"\n";
    cout<<sum<<"\n";
    if(sum%2==0) cout<<"N";
    else cout<<"Y";
    return 0;
}
/*
TGTATACACTGTAT
*/
/*
GCGCGCGTGCTGCGTACACTT-GTACACATGTCAAACACACACGTTAAC
*/