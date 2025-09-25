#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; 
    cin >> t;
    
    while(t--){
        int n; cin >> n;
        int countZero = 0, countNeg = 0; 

        for(int i = 0; i < n; ++i){
            int x; cin >> x;
            if(x == 0){
                 countZero++;
            }
            if(x < 0){
                countNeg++;
            }
        }

        int ans = countZero;

        if(countNeg % 2==1){
            ans+=2;
        }
        
        cout << ans << '\n';
    }
    return 0;
}

