#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lower=0, upper=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
    }

    if(upper<=lower){
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        cout<<s<<endl;
    }
    else if(upper>lower){
        transform(s.begin(), s.end(), s.begin(), :: toupper);
        cout<<s<<endl;
    }
}