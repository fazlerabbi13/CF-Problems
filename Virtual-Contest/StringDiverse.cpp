#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        // Step 1: check duplicates
        set<char> st(s.begin(), s.end());
        if (st.size() != s.size()) {
            cout << "No\n";
            continue;
        }

        // Step 2: sort and check contiguous letters
        sort(s.begin(), s.end());
        bool ok = true;
        for (int i = 0; i < (int)s.size() - 1; i++) {
            if (s[i + 1] != s[i] + 1) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
