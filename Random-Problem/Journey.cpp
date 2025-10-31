#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n,a,b,c;
        cin >> n >> a >> b >> c;
        
         // Total distance in one full 3-day cycle
        long long S = a + b + c;

        // How many complete 3-day cycles we can do before reaching n
        long long full_cycles = (n - 1) / S; // (n-1)//S trick
        long long days = full_cycles * 3;    // days passed after those cycles

        // Remaining distance to reach n after those cycles
        long long rem = n - full_cycles * S;

        // Now check within the next 3 days:
        if (rem <= a) {
            cout << days + 1 << "\n"; // finished on first day of the new cycle
        } else if (rem <= a + b) {
            cout << days + 2 << "\n"; // finished on second day of the new cycle
        } else {
            cout << days + 3 << "\n"; // finished on third day of the new cycle
        }
    }
    return 0;
}