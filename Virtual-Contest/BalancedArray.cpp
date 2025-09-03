#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        int k = n / 2;
        vector<int> arr;

        // First half: even numbers
        for (int i = 1; i <= k; i++) {
            arr.push_back(2 * i);
        }

        // Second half: first (k-1) odd numbers
        // for (int i = 1; i < k; i++) {
        //     arr.push_back(2 * i - 1);
        // }

        // Last odd number to balance sums
        // arr.push_back(3 * k - 1);

        // Print the vector
        // for (int x : arr) {
        //     cout << x << " ";
        // }
        // cout << "\n";
    }
    return 0;
}
