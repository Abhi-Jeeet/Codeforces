#include<bits/stdc++.h>
using namespace std;

int main(){
    string w;
    cin>>w;

    sort(w.begin(), w.end());
    int ans = 0;

    for(int i=0; i<w.length();  i++){
        if(w[i]!=w[i+1]){
            ans++;
        }
    }

    if(ans%2==0){ //even
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{ //odd
        cout<<"IGNORE HIM!"<<endl;
    }
}