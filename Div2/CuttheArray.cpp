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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        // prefix sums modulo 3
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pref[i] = (pref[i - 1] + a[i]) % 3;

        bool found = false;
        int ansL = 0, ansR = 0;

        // enumerate all l, r
        // for (int l = 1; l <= n - 2 && !found; l++) {
        //     for (int r = l + 1; r <= n - 1 && !found; r++) {
        //         int s1 = pref[l];
        //         int s2 = (pref[r] - pref[l] + 3) % 3;
        //         int s3 = (pref[n] - pref[r] + 3) % 3;

        //         if ((s1 == s2 && s2 == s3) || 
        //             (s1 != s2 && s2 != s3 && s1 != s3)) {
        //             ansL = l;
        //             ansR = r;
        //             found = true;
        //         }
        //     }
        // }

        // cout << ansL << " " << ansR << "\n";
    }
    return 0;
}
