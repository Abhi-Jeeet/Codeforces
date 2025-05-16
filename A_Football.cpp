#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int zero=0;
    int one=0;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            zero++;
            if(zero>=7)break;
            one=0;
        }
        if(s[i]=='1'){
            one++;
            if(one>=7)break;
            zero=0;
        }
    }
    if(zero>=7 || one>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}