#include<bits/stdc++.h>
using namespace std;

bool canFormDate(const vector<int>& freq) {
    vector<int> targetFreq(10, 0);
    string target = "01032025";
    
    for (char c : target) {
        targetFreq[c - '0']++;
    }
    
    for (int i = 0; i < 10; i++) {
        if (freq[i] < targetFreq[i]) return false;
    }
    return true;
}

int findMinSteps(const vector<int>& digits) {
    vector<int> freq(10, 0);
    
    for (size_t i = 0; i < digits.size(); i++) {
        freq[digits[i]]++;
        if (canFormDate(freq)) return i + 1;
    }
    return 0;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>digits(n);

        for(int i=0; i<n; i++){
            cin>>digits[i];
        }

        cout<<findMinSteps(digits)<<endl;
    }
}