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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Step 1: Determine the majority value using first 3 elements
        int majority;
        if (a[0] == a[1] || a[0] == a[2]) {
            majority = a[0];
        } else {
            majority = a[1];
        }

        // Step 2: Find the unique element
        for (int i = 0; i < n; i++) {
            if (a[i] != majority) {
                cout << (i + 1) << "\n";  // 1-based index
                break;
            }
        }
    }

    return 0;
}
