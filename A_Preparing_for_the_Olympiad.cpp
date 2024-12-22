#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int diff1 = 0;
        for(int i=0; i<n; i++){
            if(i+1 < n && a[i] > b[i+1] ){
                diff1 += a[i];
                diff1-=b[i+1];

            }
            if(i==n-1){
                diff1+=a[i];
            }
        }
        cout<<diff1<<endl;

    }
}