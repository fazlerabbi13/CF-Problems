#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        string s; cin >> s;

        int currentWhite = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == 'W') currentWhite++;
        }

        int minimumWhite = currentWhite;
        for(int i = k; i < n; i++){
            if(s[i - k] == 'W') currentWhite--;
            if(s[i] == 'W') currentWhite++;

            minimumWhite = min(minimumWhite, currentWhite);
        }

        cout << minimumWhite << "\n";

    }
    
    return 0;
}