#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        vector<int>a(m);
        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        unordered_set<int>Ques;
        for(int i=0; i<k; i++){
            int q;
            cin>>q;
            Ques.insert(q);
        }
        string ans (m,'0');
        for(int i=0; i<m; i++){
            if(Ques.size()==n-1 && Ques.find(a[i])==Ques.end()){
                ans[i] ='1';
            }
        }
        cout<<ans<<endl;
    }
}