#include<iostream>
#include<string>
#include<cmath>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x1, x2;
        cin >> x1 >> x2;

        string y1 = to_string(x1);
        string y2 = "";

        for (int i = 0; i < x2; i++) {
            y2 += y1;
        }

        try {
            long long num = stoll(y2);
            if (isPrime(num)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        catch (const std::out_of_range& e) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
