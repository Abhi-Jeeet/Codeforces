#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> A(n);
        int count[105] = {0};  

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
            count[A[i]]++;
        }

        int mex = 0;
        while (true) {
            bool possible = true;
            for (int i = 0; i < mex; ++i) {
                if (count[i] == 0) {
                    possible = false;
                    break;
                }
            }
            if (count[mex] != 0)
                possible = false;

            if (possible) {
                cout << mex << endl;
                break;
            }

            mex++;
        }
    }

    return 0;
}
