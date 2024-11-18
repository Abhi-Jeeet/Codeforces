#include <bits/stdc++.h>
using namespace std;

string solve(string& s) {
    int first = s[0] - '0';  
    char op = s[1];           
    int last = s[2] - '0';    

    char cOp;
    
    if (first < last) {
        cOp = '<';
    } else if (first == last) {
        cOp = '=';
    } else {
        cOp = '>';
    }

    
    if (op != cOp) {
        return string(1, s[0]) + cOp + string(1, s[2]);
    }
    
    
    return s;
}

int main() {
    int t;
    cin >> t;  

    while (t--) {
        string s;
        cin >> s;  
        cout << solve(s) << endl;  
    }

    return 0;
}
