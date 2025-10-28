#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> v(n);
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        bool even = true;
        bool odd = true;

        for(int i = 0; i < n; i++) {
            if(v[i] % 2 == 0){
                odd = false;
            }
            else{
                even = false;
            }
        }
        if(even || odd) {
            for(int i = 0; i < n; i++){
             cout << v[i] << " ";
            }
        }
         else {
            sort(v.begin(), v.end());
            for(int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}