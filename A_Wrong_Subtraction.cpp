#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    while(k--){
        int last_digit = n%10;
        if(last_digit!=0){
            n--;
        }
        else if(last_digit==0){
            n=n/10;
        }
    }
    cout<<n<<endl;
}