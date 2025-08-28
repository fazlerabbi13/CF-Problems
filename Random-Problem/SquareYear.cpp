#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>> t;

    while(t--){
        string s;
        cin >> s;
        
        int n = stoi(s);
        int root = sqrt(n);

        if(root*root == n){
            int a = root/2;
            int b = root - a;

            cout << a << " " << b <<"\n";
        }else{
            cout << "-1" << "\n";
        }

    }
    return 0;
}