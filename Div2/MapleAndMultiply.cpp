#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b; 
        cin >> a >> b;

        if (a == b){
            cout << 0 << '\n';
        }
        else if (b % a == 0 || a % b == 0){
            cout << 1 << '\n';
        }
        else{
            cout << 2 << '\n';
        }
    }
    return 0;
}
