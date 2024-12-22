#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        long long total = a + b + c;
        long long fullCycles = n / total;
        long long days_needed = fullCycles * 3;
        long long remaining = n % total;

        if (remaining > 0)
        {
            days_needed++;
            if (remaining > a)
            {
                days_needed++;
                if (remaining > (a + b))
                {
                    days_needed++;
                }
            }
        }
        cout<<days_needed<<endl;
    }
}