#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--){
         int x, n;
        cin >> x >> n;

        if (n % 2 == 0) 
            cout << 0 << endl;   
        else 
            cout << x << endl; 
    }
    return 0;
}