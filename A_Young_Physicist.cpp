#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Xsum=0,Ysum=0,Zsum=0;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        Xsum+=a;
        Ysum+=b;
        Zsum+=c;
    }
    if(Xsum==0 && Ysum==0 && Zsum==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}  
    
