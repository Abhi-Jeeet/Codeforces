#include<bits/stdc++.h>
using namespace std;

string changeString(string&a, int n){
    string b="";
    for(int i=n-1; i>=0; i--){
        if(a[i]=='p'){
            b+='q';
        }
        else if(a[i]=='q'){
            b+='p';
        }
        else{
            b+='w';
        }
    }
    return b;

}

int main(){
    int t;
    cin>>t;
    while (t--){
        string a;
        cin>>a;
        int n = a.length();
        cout<<changeString(a,n)<<endl;

    }
}