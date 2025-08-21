#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string a, b, c;
        
        cin >> n >> a;
        cin >> m >> b;
        cin >> c;

        string result = a;

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                // Vlad adds to the beginning
                result = b[i] + result;
            } else {
                // Dima adds to the end
                result += b[i];
            }
        }

        cout << result << "\n";
    }

    return 0;
}
