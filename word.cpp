#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,count=0;;
    string s;

    
    cin>>t;

    while(t--){
        cin>>s;

        int sz = s.size();

        if(sz > 10){
            for(int i = 1;i<s.size()-1;i++){
                count++;
            }
            cout<<s[0]+count+s[s.size()-1]<<"\n";
           
        }else{
            cout<<s<<"\n";
        }
    }
    return 0;
}