#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int > v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
     auto it = unique(v.begin(), v.end());
     for(auto u : v){
        cout << u << " ";
     }
    }
    return 0;
}