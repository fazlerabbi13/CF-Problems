#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--)
    {
        string x;
        cin>>x;

        if(x.find('0') != string::npos){
            cout<<0<<"\n";
        }else{
            char min_disit = *min_element(x.begin(),x.end());
            
            cout<<min_disit<<"\n";
        }
    }
    
    return 0;
}