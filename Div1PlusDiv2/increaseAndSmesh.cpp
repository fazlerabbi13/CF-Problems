#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> distinct;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > 0) distinct.insert(x);
        }
        if (distinct.empty()) {
            cout << 0 << '\n';
        } else {
            cout << 2 * distinct.size() - 1 << '\n';
        }
    }
    return 0;
}