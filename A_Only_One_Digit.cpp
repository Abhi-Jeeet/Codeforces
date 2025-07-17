#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = to_string(n);

        char small = s[0];
        for(int i=0; i<s.length(); i++){
            if(s[i]<small){
                small = s[i];
            }
        }
        cout<<small<<endl;

    }
}