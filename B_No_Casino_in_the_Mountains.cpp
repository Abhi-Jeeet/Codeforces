#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vec(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        int hikes = 0;
        int i = 0; 
        while (i <= n - k) {
            bool possible = true;
            for (int offset = 0; offset < k; ++offset) {
                if (vec[i + offset] == 1) {
                    possible = false;
                    i = i + offset + 1;
                    break;
                }
            }

            if (possible) {
                hikes++;          
                i = i + k + 1; 
            }
        }

        cout << hikes <<endl;
    }
}