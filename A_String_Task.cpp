#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res="";

    transform(s.begin(), s.end(), s.begin(), :: tolower);
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'|| s[i]=='y'){
            s.erase(i,1);
            i--;
        }
    }
    for(int i=0; i<s.length(); i++){
        res+='.';
        res+=s[i];
    }
    
    cout<<res<<endl;
}