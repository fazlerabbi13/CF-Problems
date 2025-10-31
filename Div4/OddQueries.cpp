#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> arr(n+1);
        vector<long long> prefixArr(n + 1, 0);

        for(int i = 1; i <= n; ++i){
            cin >> arr[i];
            prefixArr[i] = prefixArr[i - 1] + arr[i];
        }


    }
    
    return 0;
}