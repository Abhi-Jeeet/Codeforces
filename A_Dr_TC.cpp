#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;

        for(int i = 0; i < n; i++){
            string t = s;
            if(t[i] == '1'){
                t[i] = '0';  
            }
            else{
                t[i] = '1';  
            }

            for(char c : t){
                if(c == '1'){
                    count++;
                }
            }
        }

        cout << count << endl;  
    }
    return 0;
}
