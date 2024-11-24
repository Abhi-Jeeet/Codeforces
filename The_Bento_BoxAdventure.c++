#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> visited = {a, b, c, d};
    for (int i = 1; i <= 5; i++) {
        if (visited.find(i) == visited.end()) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
