#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;                     // number of test cases
    while (t--) {
        int n;
        cin >> n;                 // length of array
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Count frequencies of each distinct element
        map<int, int> freq;
        for (int x : a) {
            freq[x]++;
        }

        // Put all frequencies into a vector for easy iteration
        vector<int> f;
        for (auto &p : freq) {
            f.push_back(p.second);
        }

        int ans = 0;
        // Try every possible k (from 1 up to n)
        for (int k = 1; k <= n; k++) {
            int m = 0; // number of distinct values that appear at least k times
            for (int cnt : f) {
                if (cnt >= k) m++;
            }
            ans = max(ans, k * m); // balanced subsequence length
        }

        cout << ans << "\n";
    }

    return 0;
}
