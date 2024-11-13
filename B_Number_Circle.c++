#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    vector<int>vec(t);
    for(long long i=0; i<t; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());

    if(vec[t-3] + vec[t-2] <= vec[t-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<vec[t-1]<<" ";
        for(long long i=t-3; i>=0; --i){
            cout<<vec[i]<< " ";
        }
        cout<<vec[t-2]<<endl;
    }
    return 0;
}