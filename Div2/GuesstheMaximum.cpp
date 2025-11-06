#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector< int > arr(n);
        for (int& i : arr) {
            cin >> i;
        }
        int minimum = max(arr[0], arr[1]);
        for (int i = 1; i < n - 1; i++) {
            minimum = min(minimum, max(arr[i], arr[i + 1]));
        }
        cout << minimum - 1 << "\n";
    }
}