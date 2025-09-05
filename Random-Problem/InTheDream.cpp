#include <bits/stdc++.h>
using namespace std;

bool okHalf(long long x, long long y) {
    long long M = max(x, y);
    long long m = min(x, y);
    return M <= 2 * (m + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << (okHalf(a, b) && okHalf(c, d) ? "YES\n" : "NO\n");
    }
    return 0;
}
