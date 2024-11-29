#include<bits/stdc++.h>>
using namespace std;

int main(){
    string s;
    cin>>s;

    int len = s.length();
    int count=1;
    int ans = 1;


    for(int i=1; i<len; i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
}