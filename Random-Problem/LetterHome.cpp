#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t,n,s;
    cin>>t;

    while(t--){
        cin>>n>>s;
        vector<int> v(n);
        for(int i = 0;i<n; i++){
            cin>>v[i];
        }

        int ans = min(abs(s-v[0]),abs(s-v.back())) +v.back()-v[0];
        cout<<ans<<"\n";
    }
    return 0;
}