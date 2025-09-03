#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        set<char> st(s.begin(), s.end());
        if (st.size() != s.size()) {
            cout << "No\n";
            continue;
        }

        sort(s.begin(), s.end());
        bool isOk = true;
        for (int i = 0; i < (int)s.size() - 1; i++) {
            if (s[i + 1] != s[i] + 1) {
                isOk = false;
                break;
            }
        }

        if (isOk) {
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }
    }
    return 0;
}
