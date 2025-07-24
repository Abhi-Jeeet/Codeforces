#include<bits/stdc++.h>
using namespace std;
int ans(int m, int a, int b, int c){
    int r1 = min(m,a);
    int r2 = min(m,b);

    int remain1 = m-r1;
    int remain2 = m-r2;

    int cMonkey = min(c,(remain1+remain2));

    return  r1+ r2 + cMonkey;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        cout<<ans(m,a,b,c)<<endl;

    }
}