#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    
    cin>>t;

    while(t--){
        cin>>s;
        int sz = s.size();
        if(s[0] == '1' && s[1] == '0'){

            if(sz == 3 && s[2] > '1'){
                cout << "YES" << "\n";
             }else if(sz >3 && s[2]>='1'){
                cout << "YES" << "\n";
             }
             else{
                cout<<"NO"<<"\n";
             }
        }
     else{
        cout << "NO" << "\n";
      }
    }

    return 0; 
}