#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int totalAmount = 0;

    for(int i=1; i<=c; i++){
        totalAmount+=i*a;
    }

    int borrowAmount = totalAmount-b;
    if (borrowAmount < 0) borrowAmount = 0;
    cout<<borrowAmount<<endl;
}