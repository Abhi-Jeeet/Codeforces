#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        string x,s;
        cin>>n>>m;
        cin>>x>>s;

        string repeat = x;
        int count =1;
        while(repeat.size()<s.size()){
            repeat+=x;
            count++;
        }
        if(repeat.find(s) != string::npos || repeat.find(repeat+s)!=string::npos){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        


    }
}