#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) {
        return 0;
    }
    while (t--) {
        long long k, x;
        cin >> k >> x;
        long long a = x;
        for (long long i = 0; i < k; ++i){
             a *= 2;
        }
        cout << a << '\n';
    }
    return 0;
}
