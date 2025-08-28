#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        string s;
        cin >> n >> s;

        long long k = count(s.begin(), s.end(), '1');
        long long ans = n * (k + 1) - 2 * k;   // total number of 1s on the board
        cout << ans << '\n';
    }
    return 0;
}
