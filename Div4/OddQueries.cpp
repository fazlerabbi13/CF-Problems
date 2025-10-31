#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<ll> arr(n+1);
        vector<ll> prefixArr(n + 1, 0);

        for(int i = 1; i <= n; ++i){
            cin >> arr[i];
            prefixArr[i] = prefixArr[i - 1] + arr[i];
        }

        ll totalSum = prefixArr[n];

        while(q--){
            int l,r;
            ll k;
            cin >> l >> r >> k;
            
            ll length = r - l + 1;
            ll subSum = prefixArr[r] - prefixArr[l - 1];

            ll newSum = totalSum - subSum + length * k;

            if(newSum % 2 == 1){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }


    }
    
    return 0;
}