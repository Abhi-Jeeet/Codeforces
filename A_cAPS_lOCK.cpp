#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(!(s[0]>='A' && s[0]<='Z')){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        cout<<s<<endl;
    }
    else{
        cout<<s<<endl;
    }
}